//                                  I B E X
// File        : ibex_Optimizer.cpp
// Author      : Gilles Chabert, Bertrand Neveu
// Copyright   : IMT Atlantique (France)
// License     : See the LICENSE file
// Created     : May 14, 2012
// Last Update : Apr 08, 2019
//============================================================================

#include "ibex_Optimizer.h"
#include "ibex_Timer.h"
#include "ibex_Function.h"
#include "ibex_NoBisectableVariableException.h"
#include "ibex_BxpOptimData.h"
#include "ibex_CovOptimData.h"

#include <float.h>
#include <stdlib.h>
#include <iomanip>

using namespace std;

namespace ibex {

/*
 * TODO: redundant with ExtendedSystem.
 */
void Optimizer::write_ext_box(const IntervalVector& box, IntervalVector& ext_box) {
	int i2=0;
	for (int i=0; i<n; i++,i2++) {
		if (i2==goal_var) i2++; // skip goal variable
		ext_box[i2]=box[i];
	}
}

void Optimizer::read_ext_box(const IntervalVector& ext_box, IntervalVector& box) {
	int i2=0;
	for (int i=0; i<n; i++,i2++) {
		if (i2==goal_var) i2++; // skip goal variable
		box[i]=ext_box[i2];
	}
}

Optimizer::Optimizer(int n, Ctc& ctc, Bsc& bsc, LoupFinder& finder,
		CellBufferOptim& buffer,
		int goal_var, double eps_x, double rel_eps_f, double abs_eps_f) :
                						n(n), goal_var(goal_var),
										ctc(ctc), bsc(bsc), loup_finder(finder), buffer(buffer),
										eps_x(n, eps_x), rel_eps_f(rel_eps_f), abs_eps_f(abs_eps_f),
										trace(0), timeout(-1), extended_COV(true), anticipated_upper_bounding(true),
										status(SUCCESS),
										uplo(NEG_INFINITY), uplo_of_epsboxes(POS_INFINITY), loup(POS_INFINITY),
										loup_point(IntervalVector::empty(n)), initial_loup(POS_INFINITY), loup_changed(false),
										time(0), nb_cells(0), cov(NULL) {

	if (trace) cout.precision(12);
}


Optimizer::Optimizer(OptimizerConfig& config) :
		n           (config.nb_var()),
		goal_var    (config.goal_var()),
		ctc         (config.get_ctc()),
		bsc         (config.get_bsc()),
		loup_finder (config.get_loup_finder()),
		buffer      (config.get_cell_buffer()),
		eps_x       (config.get_eps_x()),
		rel_eps_f   (config.get_rel_eps_f()),
		abs_eps_f   (config.get_abs_eps_f()),
		trace       (config.get_trace()),
		timeout     (config.get_timeout()),
		extended_COV(config.with_extended_cov()),
		anticipated_upper_bounding(config.with_anticipated_upper_bounding()),
		status(SUCCESS),
		uplo(NEG_INFINITY), uplo_of_epsboxes(POS_INFINITY), loup(POS_INFINITY),
		loup_point(IntervalVector::empty(n)), initial_loup(POS_INFINITY), loup_changed(false),
		time(0), nb_cells(0), cov(NULL) {

}

Optimizer::~Optimizer() {
	if (cov) delete cov;
}

// compute the value ymax (decreasing the loup with the precision)
// the heap and the current box are contracted with y <= ymax
double Optimizer::compute_ymax() {
	if (anticipated_upper_bounding) {
		//double ymax = loup - rel_eps_f*fabs(loup); ---> wrong :the relative precision must be correct for ymax (not loup)
		double ymax = loup>0 ?
				1/(1+rel_eps_f)*loup
		:
				1/(1-rel_eps_f)*loup;

		if (loup - abs_eps_f < ymax)
			ymax = loup - abs_eps_f;
		//return ymax;
		return next_float(ymax);
	} else
		return loup;
}

double last_found = 0.0;
bool Optimizer::update_loup(const IntervalVector& box, BoxProperties& prop) {



	try {
		last_found = POS_INFINITY;
		pair<IntervalVector,double> p=loup_finder.find(box,loup_point,POS_INFINITY,prop);
		last_found = p.second;


		if(p.second>loup) throw LoupFinder::NotFound();

		loup_point = p.first;
		loup = p.second;

		if (trace) {
			cout << "                    ";
			cout << "\033[32m loup= " << loup << "\033[0m" << endl;
//			cout << " loup point=";
//			if (loup_finder.rigorous())
//				cout << loup_point << endl;
//			else
//				cout << loup_point.lb() << endl;
		}
		return true;

	} catch(LoupFinder::NotFound&) {
		return false;
	}
}

//bool Optimizer::update_entailed_ctr(const IntervalVector& box) {
//	for (int j=0; j<m; j++) {
//		if (entailed->normalized(j)) {
//			continue;
//		}
//		Interval y=sys.ctrs[j].f.eval(box);
//		if (y.lb()>0) return false;
//		else if (y.ub()<=0) {
//			entailed->set_normalized_entailed(j);
//		}
//	}
//	return true;
//}

void Optimizer::update_uplo() {
	double new_uplo=POS_INFINITY;

	if (! buffer.empty()) {
		new_uplo= buffer.minimum();
		/*if (new_uplo > loup && uplo_of_epsboxes > loup) {
			cout << " loup = " << loup << " new_uplo=" << new_uplo <<  " uplo_of_epsboxes=" << uplo_of_epsboxes << endl;
			ibex_error("optimizer: new_uplo>loup (please report bug)");
		}*/
		if (new_uplo < uplo) {
			cout << "uplo= " << uplo << " new_uplo=" << new_uplo << endl;
			ibex_error("optimizer: new_uplo<uplo (please report bug)");
		}

		// uplo <- max(uplo, min(new_uplo, uplo_of_epsboxes))
		if (new_uplo < uplo_of_epsboxes) {
			if (new_uplo > uplo) {
				uplo = new_uplo;

				if (trace)
					cout << "\033[33m uplo= " << uplo << "\033[0m" << endl;
			}
		}
		else uplo = uplo_of_epsboxes;
	}
	else if (buffer.empty() && loup != POS_INFINITY) {
		// empty buffer : new uplo is set to ymax (loup - precision) if a loup has been found
		new_uplo=compute_ymax(); // not new_uplo=loup, because constraint y <= ymax was enforced
		//    cout << " new uplo buffer empty " << new_uplo << " uplo " << uplo << endl;

		double m = (new_uplo < uplo_of_epsboxes) ? new_uplo :  uplo_of_epsboxes;
		if (uplo < m) uplo = m; // warning: hides the field "m" of the class
		// note: we always have uplo <= uplo_of_epsboxes but we may have uplo > new_uplo, because
		// ymax is strictly lower than the loup.
	}

}

void Optimizer::update_uplo_of_epsboxes(double ymin) {

	// the current box cannot be bisected.  ymin is a lower bound of the objective on this box
	// uplo of epsboxes can only go down, but not under uplo : it is an upperbound for uplo,
	// that indicates a lowerbound for the objective in all the small boxes
	// found by the precision criterion
	assert (uplo_of_epsboxes >= uplo);
	assert(ymin >= uplo);
	if (uplo_of_epsboxes > ymin) {
		uplo_of_epsboxes = ymin;
		if (trace) {
			cout << " unprocessable tiny box: now uplo<=" << setprecision(12) <<  uplo_of_epsboxes << " uplo=" << uplo << endl;
		}
	}
}

void Optimizer::handle_cell(Cell& c) {

	contract_and_bound(c);

	if (c.box.is_empty()) {
		delete &c;
	} else {
		buffer.push(&c);
	}
}

void Optimizer::contract_and_bound(Cell& c) {

	/*======================== contract y with y<=loup ========================*/
	Interval& y=c.box[goal_var];

	double ymax;
	if (loup==POS_INFINITY) ymax = POS_INFINITY;
	// ymax is slightly increased to favour subboxes of the loup
	// TODO: useful with double heap??
	else ymax = compute_ymax()+1.e-15;

	y &= Interval(NEG_INFINITY,ymax);

	if (y.is_empty()) {
		c.box.set_empty();
		return;
	} else {
		c.prop.update(BoxEvent(c.box,BoxEvent::CONTRACT,BitSet::singleton(n+1,goal_var)));
	}

	/*================ contract x with f(x)=y and g(x)<=0 ================*/
	//cout << " [contract]  x before=" << c.box << endl;
	//cout << " [contract]  y before=" << y << endl;

	ContractContext context(c.prop);
	if (c.bisected_var!=-1) {
		context.impact.clear();
		context.impact.add(c.bisected_var);
		context.impact.add(goal_var);
	}

	ctc.contract(c.box, context);

	//cout << c.prop << endl;
	if (c.box.is_empty()) return;

	//cout << " [contract]  x after=" << c.box << endl;
	//cout << " [contract]  y after=" << y << endl;
	/*====================================================================*/

	/*========================= update loup =============================*/

	IntervalVector tmp_box(n);
	read_ext_box(c.box,tmp_box);

	c.prop.update(BoxEvent(c.box,BoxEvent::CHANGE));

	bool loup_ch=update_loup(tmp_box, c.prop);

	// update of the upper bound of y in case of a new loup found
	if (loup_ch) {
		y &= Interval(NEG_INFINITY,compute_ymax());
		c.prop.update(BoxEvent(c.box,BoxEvent::CONTRACT,BitSet::singleton(n+1,goal_var)));
	}

	//TODO: should we propagate constraints again?

	loup_changed |= loup_ch;

	if (y.is_empty()) { // fix issue #44
		c.box.set_empty();
		return;
	}

	/*====================================================================*/
	// Note: there are three different cases of "epsilon" box,
	// - NoBisectableVariableException raised by the bisector (---> see optimize(...)) which
	//   is independent from the optimizer
	// - the width of the box is less than the precision given to the optimizer ("eps_x" for
	//   the original variables and "abs_eps_f" for the goal variable)
	// - the extended box has no bisectable domains (if eps_x=0 or <1 ulp)
	if (((tmp_box.diam()-eps_x).max()<=0 && y.diam() <=abs_eps_f) || !c.box.is_bisectable()) {
		update_uplo_of_epsboxes(y.lb());
		c.box.set_empty();
		return;
	}

	// ** important: ** must be done after upper-bounding
	//kkt.contract(tmp_box);

	if (tmp_box.is_empty()) {
		c.box.set_empty();
	} else {
		// the current extended box in the cell is updated
		write_ext_box(tmp_box,c.box);
	}
}

Optimizer::Status Optimizer::optimize(const IntervalVector& init_box, double obj_init_bound) {
	start(init_box, obj_init_bound);
	return optimize();
}


Optimizer::Status Optimizer::optimize(const CovOptimData& data, double obj_init_bound) {
	start(data, obj_init_bound);
	return optimize();
}

Optimizer::Status Optimizer::optimize(const char* cov_file, double obj_init_bound) {
	CovOptimData data(cov_file);
	start(data, obj_init_bound);
	return optimize();
}

void Optimizer::start(const IntervalVector& init_box, double obj_init_bound) {

	loup=obj_init_bound;

	// Just to initialize the "loup" for the buffer
	// TODO: replace with a set_loup function
	buffer.contract(loup);

	uplo=NEG_INFINITY;
	uplo_of_epsboxes=POS_INFINITY;

	nb_cells=0;

	buffer.flush();

	Cell* root=new Cell(IntervalVector(n+1));

	write_ext_box(init_box, root->box);

	// add data required by the bisector
	bsc.add_property(init_box, root->prop);

	// add data required by the contractor
	ctc.add_property(init_box, root->prop);

	// add data required by the buffer
	buffer.add_property(init_box, root->prop);

	// add data required by the loup finder
	loup_finder.add_property(init_box, root->prop);

	//cout << "**** Properties ****\n" << root->prop << endl;

	loup_changed=false;
	initial_loup=obj_init_bound;

	loup_point = init_box; //.set_empty();
	time=0;

	if (cov) delete cov;
	cov = new CovOptimData(extended_COV? n+1 : n, extended_COV);
	cov->data->_optim_time = 0;
	cov->data->_optim_nb_cells = 0;

	handle_cell(*root);
}

void Optimizer::start(const CovOptimData& data, double obj_init_bound) {

	loup=obj_init_bound;

	// Just to initialize the "loup" for the buffer
	// TODO: replace with a set_loup function
	buffer.contract(loup);

	uplo=data.uplo();
	loup=data.loup();
	loup_point=data.loup_point();
	uplo_of_epsboxes=POS_INFINITY;

	nb_cells=0;

	buffer.flush();

	for (size_t i=loup_point.is_empty()? 0 : 1; i<data.size(); i++) {

		IntervalVector box(n+1);

		if (data.is_extended_space())
			box = data[i];
		else {
			write_ext_box(data[i], box);
			box[goal_var] = Interval(uplo,loup);
			ctc.contract(box);
			if (box.is_empty()) continue;
		}

		Cell* cell=new Cell(box);

		// add data required by the cell buffer
		buffer.add_property(box, cell->prop);

		// add data required by the bisector
		bsc.add_property(box, cell->prop);

		// add data required by the contractor
		ctc.add_property(box, cell->prop);

		// add data required by the loup finder
		loup_finder.add_property(box, cell->prop);

		buffer.push(cell);
	}

	loup_changed=false;
	initial_loup=obj_init_bound;

	time=0;

	if (cov) delete cov;
	cov = new CovOptimData(extended_COV? n+1 : n, extended_COV);
	cov->data->_optim_time = data.time();
	cov->data->_optim_nb_cells = data.nb_cells();
}

double Optimizer::simulation(System& sys, System& nsys, std::queue<int> path, bool untilend){
	update_uplo();
	Cell *c = buffer.top();
	contract_and_bound(*c);
	if (c->box.is_empty()) return loup;

	
	double UB0 = last_found;
	double LB0 = c->box[n].lb();
	buffer.pop();
	int d=0, depth=0;
	double lb = POS_INFINITY;

	bool first=true;
	while (true){
		int ptop=-1;
		if (path.size()>0) ptop=path.front();
		
		pair<Cell*,Cell*> new_cells=bsc.bisect(*c);
		Cell* c1=new_cells.first;
		Cell* c2=new_cells.second;

		
		Vector pt = c1->box.mid();
		double ev1 = nsys.goal_ub(pt);
		double err1 = sys.f_ctrs.eval_vector(pt).mid()*sys.f_ctrs.eval_vector(pt).mid();
		pt = c2->box.mid();
		double ev2 = nsys.goal_ub(pt);
		double err2 = sys.f_ctrs.eval_vector(pt).mid()*sys.f_ctrs.eval_vector(pt).mid();

		double loup0 = loup;
		contract_and_bound(*c1); //update loup
		double ub0 = last_found;
		double loup1 = loup;
		loup=loup0;
		contract_and_bound(*c2); //update loup
		double ub1 = last_found;
		if(loup1<loup) loup=loup1;
		if(loup<loup0) depth=d;

		if (c1->box.is_empty() && c2->box.is_empty() && !untilend){
			double lb0 = POS_INFINITY, lb1=POS_INFINITY;
			double ubb0 = POS_INFINITY, ubb1=POS_INFINITY;
			cout << c->box << endl;
			cout << ":" << lb0 << ":" << ub0 << ":" << lb1 << ":" << ub1 << ":" << LB0 << ":" << UB0 << ":" << loup << 
			":" << ev1 << ":" << ev2 << ":" << err1 << ":" << err2 << ":" << ubb0 << ":" << ubb1 << endl; 
			delete c;
			delete c1; delete c2; return loup;
		}

		if (c1->box.is_empty() && c2->box.is_empty()){if (first==false) cout << "] }" << endl; delete c1; delete c2; return loup;}
		else if (c1->box.is_empty()) { c=c2; delete c1;}
		else if (c2->box.is_empty()) { c=c1; delete c2;}
		else{

			if(!untilend && path.size()==0) { 
				double lb0 = POS_INFINITY, lb1=POS_INFINITY;
				double ubb0 = POS_INFINITY, ubb1=POS_INFINITY;
				if (!c1->box.is_empty()) lb0 = c1->box[n].lb();
				if (!c2->box.is_empty()) lb1 = c2->box[n].lb();
				if (!c1->box.is_empty()) ubb0 = c1->box[n].ub();
				if (!c2->box.is_empty()) ubb1 = c2->box[n].ub();

				cout << c->box << endl;
				cout << ":" << lb0 << ":" << ub0 << ":" << lb1 << ":" << ub1 << ":" << LB0 << ":" << UB0 << ":" << loup << 
				":" << ev1 << ":" << ev2 << ":" << err1 << ":" << err2  << ":" << ubb0 << ":" << ubb1 << endl; 
				delete c;
				delete c1; delete c2; return loup;
			}

			if(first){
				cout << "{ \"left\": [";
				for(int i=0;i<n;i++){
					if (i>0) cout << ",";
					cout << "[" << c1->box[i].lb() << "," << c1->box[i].ub() << "]";
				}
				cout << "], " << "\"l_lb\": "  << c1->box[n].lb() << ", " ;

				cout << "\"right\": [";
				for(int i=0;i<n;i++){
					if (i>0) cout << ",";
					cout << "[" << c2->box[i].lb() << "," << c2->box[i].ub() << "]";
				}
				cout << "], " << "\"r_lb\": "  << c2->box[n].lb() << ", " ;

				if (UB0 == POS_INFINITY) UB0=1e20;
				cout << "\"path\": [[" << c->depth << "," <<c->box[n].lb()  << "," << c->box[n].ub() << "," << UB0 << "]";
				first = false;

			}

			double ub;
			if (c1->box[n].lb()<=c2->box[n].lb() && (ptop==0 || ptop==-1)){  
				//cout << 0 << "+"; d++;
				c=c1; delete c2; 
	
				if (path.size()>0){
					lb=c1->box[n].lb();
				    path.pop();
				}
				ub = ub0;
			}else{ 
				//cout << 1 << "+"; d++;
				c=c2; delete c1; 
				if (path.size()>0){
					lb=c2->box[n].lb();
					path.pop();
				}
				ub=ub1;
			}
			if (ub == POS_INFINITY) ub=1e20;
			loup = ub;
			cout << ",[" << c->depth << "," <<c->box[n].lb()  << "," << c->box[n].ub() << "," << ub << "]";
		}
	}

}

Optimizer::Status Optimizer::optimize() {
	Timer timer;
	timer.start();

	update_uplo();

	try {
	     while (!buffer.empty()) {

			loup_changed=false;
			// for double heap , choose randomly the buffer : top  has to be called before pop
			Cell *c = buffer.top();
			if (trace >= 2) cout << " current box " << c->box << endl;

			try {

				pair<Cell*,Cell*> new_cells=bsc.bisect(*c);
				buffer.pop();
				delete c; // deletes the cell.

				nb_cells+=2;  // counting the cells handled ( in previous versions nb_cells was the number of cells put into the buffer after being handled)

				handle_cell(*new_cells.first);
				handle_cell(*new_cells.second);

				if (uplo_of_epsboxes == NEG_INFINITY) {
					break;
				}
				if (loup_changed) {
					// In case of a new upper bound (loup_changed == true), all the boxes
					// with a lower bound greater than (loup - goal_prec) are removed and deleted.
					// Note: if contraction was before bisection, we could have the problem
					// that the current cell is removed by contractHeap. See comments in
					// older version of the code (before revision 284).

					double ymax=compute_ymax();

					buffer.contract(ymax);

					//cout << " now buffer is contracted and min=" << buffer.minimum() << endl;

					// TODO: check if happens. What is the return code in this case?
					if (ymax <= NEG_INFINITY) {
						if (trace) cout << " infinite value for the minimum " << endl;
						break;
					}
				}
				update_uplo();

				if (!anticipated_upper_bounding) // useless to check precision on objective if 'true'
					if (get_obj_rel_prec()<rel_eps_f || get_obj_abs_prec()<abs_eps_f)
						break;

				if (timeout>0) timer.check(timeout); // TODO: not reentrant, JN: done
				time = timer.get_time();

			}
			catch (NoBisectableVariableException& ) {
				update_uplo_of_epsboxes((c->box)[goal_var].lb());
				buffer.pop();
				delete c; // deletes the cell.
				update_uplo(); // the heap has changed -> recalculate the uplo (eg: if not in best-first search)

			}
		}

	 	timer.stop();
	 	time = timer.get_time();

		// No solution found and optimization stopped with empty buffer
		// before the required precision is reached => means infeasible problem
	 	if (uplo_of_epsboxes == NEG_INFINITY)
	 		status = UNBOUNDED_OBJ;
	 	else if (uplo_of_epsboxes == POS_INFINITY && (loup==POS_INFINITY || (loup==initial_loup && abs_eps_f==0 && rel_eps_f==0)))
	 		status = INFEASIBLE;
	 	else if (loup==initial_loup)
	 		status = NO_FEASIBLE_FOUND;
	 	else if (get_obj_rel_prec()>rel_eps_f && get_obj_abs_prec()>abs_eps_f)
	 		status = UNREACHED_PREC;
	 	else
	 		status = SUCCESS;
	}
	catch (TimeOutException& ) {
		status = TIME_OUT;
	}

	/* TODO: cannot retrieve variable names here. */
	for (int i=0; i<(extended_COV ? n+1 : n); i++)
		cov->data->_optim_var_names.push_back(string(""));

	cov->data->_optim_optimizer_status = (unsigned int) status;
	cov->data->_optim_uplo = uplo;
	cov->data->_optim_uplo_of_epsboxes = uplo_of_epsboxes;
	cov->data->_optim_loup = loup;

	cov->data->_optim_time += time;
	cov->data->_optim_nb_cells += nb_cells;
	cov->data->_optim_loup_point = loup_point;

	// for conversion between original/extended boxes
	IntervalVector tmp(extended_COV ? n+1 : n);

	// by convention, the first box has to be the loup-point.
	if (extended_COV) {
		write_ext_box(loup_point, tmp);
		tmp[goal_var] = Interval(uplo,loup);
		cov->add(tmp);
	}
	else {
		cov->add(loup_point);
	}

	while (!buffer.empty()) {
		Cell* cell=buffer.top();
		if (extended_COV)
			cov->add(cell->box);
		else {
			read_ext_box(cell->box,tmp);
			cov->add(tmp);
		}
		delete buffer.pop();
	}

	return status;
}

namespace {
const char* green() {
#ifndef _WIN32
	return "\033[32m";
#else
	return "";
#endif
}

const char* red(){
#ifndef _WIN32
	return "\033[31m";
#else
	return "";
#endif
}

const char* white() {
#ifndef _WIN32
	return "\033[0m";
#else
	return "";
#endif
}

}

void Optimizer::report() {

	if (!cov || !buffer.empty()) { // not started
		cout << " not started." << endl;
		return;
	}

	switch(status) {
	case SUCCESS:
		cout << green() << " optimization successful!" << endl;
		break;
	case INFEASIBLE:
		cout << red() << " infeasible problem" << endl;
		break;
	case NO_FEASIBLE_FOUND:
		cout << red() << " no feasible point found (the problem may be infeasible)" << endl;
		break;
	case UNBOUNDED_OBJ:
		cout << red() << " possibly unbounded objective (f*=-oo)" << endl;
		break;
	case TIME_OUT:
		cout << red() << " time limit " << timeout << "s. reached " << endl;
		break;
	case UNREACHED_PREC:
		cout << red() << " unreached precision" << endl;
		break;
	}
	cout << white() <<  endl;

	// No solution found and optimization stopped with empty buffer
	// before the required precision is reached => means infeasible problem
	if (status==INFEASIBLE) {
		cout << " infeasible problem " << endl;
	} else {
		cout << " f* in\t[" << uplo << "," << loup << "]" << endl;
		cout << "\t(best bound)" << endl << endl;

		if (loup==initial_loup)
			cout << " x* =\t--\n\t(no feasible point found)" << endl;
		else {
			if (loup_finder.rigorous())
				cout << " x* in\t" << loup_point << endl;
			else
				cout << " x* =\t" << loup_point.lb() << endl;
			cout << "\t(best feasible point)" << endl;
		}
		cout << endl;
		double rel_prec=get_obj_rel_prec();
		double abs_prec=get_obj_abs_prec();

		cout << " relative precision on f*:\t" << rel_prec;
		if (rel_prec <= rel_eps_f)
			cout << green() << " [passed] " << white();
		cout << endl;

		cout << " absolute precision on f*:\t" << abs_prec;
		if (abs_prec <= abs_eps_f)
			cout << green() << " [passed] " << white();
		cout << endl;
	}

	cout << " cpu time used:\t\t\t" << time << "s";
	if (cov->time()!=time)
		cout << " [total=" << cov->time() << "]";
	cout << endl;
	cout << " number of cells:\t\t" << nb_cells;
	if (cov->nb_cells()!=nb_cells)
		cout << " [total=" << cov->nb_cells() << "]";
	cout << endl << endl;
}



} // end namespace ibex

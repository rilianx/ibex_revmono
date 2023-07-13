//============================================================================
//                                  I B E X                                   
// File        : ibex_CtcRevisedMonotonicityTest.cpp
// Author      : Ignacio Araya
// Copyright   : IMT Atlantique (France)
// License     : See the LICENSE file
// Created     : May 31, 2022
// Last Update : May 31, 2022
//============================================================================

#include <vector>
#include <algorithm>
#include <variant>
#include "product.cpp"
#include "ibex_CtcExistenceTest.h"



using namespace std;
namespace ibex {

    int CtcExistenceTest::last_remove = 0;

CtcExistenceTest::~CtcExistenceTest() {

}

Interval CtcExistenceTest::mono_fast(
    int j,  
    IntervalVector x,
    IntervalVector g
){

    IntervalVector x_(x);

    //computing the lower bound of f
    for(int i=0; i<x.size(); i++){
        if (g[i].lb()>0) x[i] = Interval(x_[i].lb());
        else if (g[i].ub()<0) x[i] = Interval(x_[i].ub());
    }

    Interval ev(sys.f_ctrs[j].eval(x));

    x=x_;

    //computing the upper bound of f
    for(int i=0; i<x.size(); i++){
        if (g[i].lb()>0) x[i] = Interval(x_[i].ub());
        else if (g[i].ub()<0) x[i] = Interval(x_[i].lb());
    }

    ev = Interval(ev.lb(), sys.f_ctrs[j].eval(x).ub());

    return ev;

}

Interval CtcExistenceTest::taylor_eval(
    int j,  
    IntervalVector& x,
    vector<IntervalVector>& gs,
    bool hansen
){
    Interval ev = sys.f_ctrs[j].eval(x.mid());
    IntervalVector* x_;

    if(hansen)
        x_ = new IntervalVector(x.mid());
    
    for(int i=0; i<x.size(); i++){
        if(hansen) {
            (*x_)[i] = Interval(x[i]);
            ev += deriv_sys.f_ctrs[j*sys.nb_var + i].eval(*x_)*(x[i]-x[i].mid());
        } else 
            ev += gs[j][i]*(x[i]-x[i].mid());
        
    }

    if(hansen) delete x_;

    return ev;

}

pair<IntervalVector, double> CtcExistenceTest::identify_min_max_subspace(
    int j, int i, 
    IntervalVector x, 
    IntervalVector x0, 
    variant<int, pair<int, int>> incr, // 0: no incr, 1: incr, -1: decr, pair<int, int>: incr/decr on var
    bool minimization, 
    bool taylor
) {
    Interval xi = x[i];
    double error;
;    
    if (holds_alternative<int>(incr)) {
        if ((minimization == true && get<int>(incr) == 1) || (minimization == false && get<int>(incr) == -1)) 
            x[i] = Interval(xi.lb());
        	else x[i] = Interval(xi.ub());

        if (!x0.is_empty()) {
            if (!x.is_subset(x0)) {
				Interval d = deriv_sys.f_ctrs[j*sys.nb_var + i].eval(x0);
                
                if (get<int>(incr) == 1) 
                    error = std::max(0.0, -d.lb() * x0[i].diam());
                 else 
                    error = std::max(0.0, d.ub() * x0[i].diam());
                
                if (taylor) {
					return make_pair(x,error);
				} else {
					IntervalVector xx = x;
					xx |= x0;
					return make_pair(xx,0.0);
				}
            } else {
                return make_pair(x0,0.0);
            }
        } else {
            return make_pair(x,0.0);
        }
		
    } else if (i != get<pair<int, int>>(incr).first) {
        IntervalVector x2 = x;
        if ((minimization == true && get<pair<int, int>>(incr).second == +1) || (minimization == false && get<pair<int, int>>(incr).second == -1)) {
            x[i] = Interval(xi.lb());
            x2[i] = Interval(xi.ub());
        } else {
            x[i] = Interval(xi.ub());
            x2[i] = Interval(xi.lb());
        }

        int var = get<pair<int, int>>(incr).first;
        Interval xvar = x[var];

        bool xleft = true;
        x[var] = Interval(xvar.lb(), x0[var].lb());
        x2[var] = Interval(x0[var].ub(), xvar.ub());
        int incr_ = get<pair<int, int>>(incr).second;

        if (xvar.ub() - x0[var].ub() > x0[var].lb() - xvar.lb()) {
            xleft = false;
            swap(x, x2);
            incr_ *= -1;
        }

        Interval d = deriv_sys.f_ctrs[j*sys.nb_var + i].eval(x0); 
        Interval dvar = deriv_sys.f_ctrs[j*sys.nb_var + i].eval(x2);

        if ((minimization && xleft) || (!minimization && !xleft)) {
            error = std::max(0.0, -dvar.lb() * x2[var].diam());
        } else {
            error = std::max(0.0, dvar.ub() * x2[var].diam());
        }

        if (incr_==+1) 
            error += std::max(0.0, -d.lb() * x0[i].diam());
        else 
            error += std::max(0.0, d.ub() * x0[i].diam());
		

        if (taylor) return make_pair(x,error);
		else{
	        x[i] = xi;
    	    x[var] = xvar;
        	return make_pair(x,0.0);
		}
        
    } else if (i == get<pair<int, int>>(incr).first) {
        Interval d = deriv_sys.f_ctrs[j*sys.nb_var + i].eval(x0); 

        if ((minimization == true && get<pair<int, int>>(incr).second == 1) || (minimization == false && get<pair<int, int>>(incr).second == -1)) {
            if (x[i].ub() - x0[i].ub() < x0[i].lb() - x[i].lb()) {
                x0[i] |= Interval(x[i].ub());
                return identify_min_max_subspace(j, i, x, x0, get<pair<int, int>>(incr).second, minimization, taylor);
            } else {
                x0[i] |= Interval(x[i].lb());
                return identify_min_max_subspace(j, i, x, x0, !get<pair<int, int>>(incr).second, minimization, taylor);
            }
        } else {
            return make_pair(x,0.0);
        }
    } else {
        cout << "no case for identify_min_max_subspace\n";
		exit(1);
    }
}

pair<IntervalVector, variant<int,pair<int,int>>> CtcExistenceTest::detect_boxes(
    int j, int i,  
    IntervalVector x, 
    double ratio, 
    double prec, 
    bool trad
) {

    IntervalVector x0 = x;
    double old_p = x.perimeter();
    int neg = 0, pos = 0;

    ctc_geq[j][i]->contract(x0);

	//box discarded by df>=0, thus f is decreasing
    if (x0.is_empty()) return make_pair(x0, -1);
    

    int var=-1; //first variable contracted
    for (int k = 0; k < x.size(); k++) {
        if (x0[k].lb() > x[k].lb()) {
            neg = -1; //left
            var = k; break;
        } else if (x0[k].ub() < x[k].ub()) {
            neg = 1; //right 
            var = k; break;
        }
    }

    old_p = x.perimeter();
    IntervalVector x1 = x0;
    ctc_leq[j][i]->contract(x0);

	//box discarded by df<=0, thus f is increasing
    if (x0.is_empty()) return make_pair(x0, 1);
    

	//traditional monotonicity test stops here
    if (trad) return make_pair(x0, 0);

    bool same_var = false;
    for (int j = 0; j < x.size(); j++) {
        if (x0[j].lb() > x1[j].lb()) {
            pos = -1; //left
            if (var == j) {
                same_var = true;
                break;
            }
            var = j;
        } else if (x0[j].ub() < x1[j].ub()) {
            pos = +1; //right
            if (var == j) {
                same_var = true;
                break;
            }
            var = j;
        }
    }

	//df<=0 reduced the box, we test again df>=0
    if (pos!=0 && neg==0) {
        old_p = x.perimeter();
        x1 = x0;
        ctc_geq[j][i]->contract(x0);
        for (int j = 0; j < x.size(); j++) {
            if (x0[j].lb() > x1[j].lb()) {
                neg = -1; //left
                if (var == j) {
                    same_var = true; //same variable contracted in both directions
                    break;
                }
            } else if (x0[j].ub() < x1[j].ub()) {
                neg = +1; //right
                if (var == j) {
                    same_var = true; //same variable contracted in both directions
                    break;
                }
            }
        }
    }
 
	//further reduction of x0
    while (x0.perimeter() > prec && x0.perimeter() < ratio * old_p) {
        old_p = x0.perimeter();
        ctc[j][i]->contract(x0);
    }

    if (x0.is_empty()) x0 = IntervalVector::empty(x0.size());

	//no contraction in any direction
    if (neg==0 && pos==0) return make_pair(x0, 0);
	//contracted region is decreasing
    else if (neg!=0 && pos==0) return make_pair(x0, -1);
	//contracted region is increasing
    else if (neg==0 && pos!=0) return make_pair(x0, 1);

	//same variable contracted with df>=0 and df<=0
    if (same_var) {
        if (pos==-1 && neg==1) return make_pair(x0, make_pair(var,1));
		else if (pos==1 && neg==-1) return make_pair(x0, make_pair(var,-1));
	}

	//should not happen (print error)
    cout << neg << "," << pos << "," << x0 << endl;
	cout << "Error in monotonicity test" << endl;
	exit(1);
}
           
pair<IntervalVector, double> CtcExistenceTest::get_monotonic_box(
	int j, //constraint index
    IntervalVector x, 
    IntervalVector& g, 
    bool minimization, 
    double ratio, 
    double prec, 
    bool trad, 
    bool taylor
) {
	double total_error = 0;

	for (int i = 0; i < x.size(); i++) {
        if(occs[j][i]<=1) continue; 

        if (!g[i].contains(0)){
            if ((g[i].lb()>0 && minimization) || (g[i].ub()<0 && !minimization)) x[i] = Interval(x[i].lb());
            else if ((g[i].lb()>0 && !minimization) || (g[i].ub()<0 && minimization)) x[i] = Interval(x[i].ub());
            continue;
        }

        //if( std::min(-g[i].lb(), g[i].ub()) / std::max(-g[i].lb(), g[i].ub()) > 0.5) continue;

		auto [x0, incr] = detect_boxes(j, i, x, ratio, prec, trad);

        if (holds_alternative<int>(incr) && get<int>(incr) == 0){
            total_error += (deriv_sys.f_ctrs[j*sys.nb_var + i].eval(x)*(x[i]-x[i].mid())).ub();
            x[i] = x[i].mid();
            continue;
        } 

		//min or mar subspace associated to x[i]
		auto [x_m, error] = identify_min_max_subspace (j, i, x, x0, incr, minimization, taylor);
		total_error += error;
        x = x_m;

    }

    return make_pair(x, total_error);
}




void CtcExistenceTest::contract(
	IntervalVector& x) {
    
    if (test_type == CtcExistenceTest::NONE) return;

    vector<IntervalVector> gs;
    
    for (int j=0; j<nb_ctr; j++){
        IntervalVector g(x);
        sys.f_ctrs[j].gradient(x, g);
        gs.push_back(g);

        Interval ev = mono_fast(j, x, g);
        if (ev.lb()>0 || ev.ub()<0) {
            x.set_empty();
            //cout << CtcExistenceTest::last_remove << endl;
            //CtcExistenceTest::last_remove=0;
            return;
        }
    }
    

    if(test_type == CtcExistenceTest::TAY || test_type == CtcExistenceTest::HAN 
        || test_type == CtcExistenceTest::REVMONO_TAY 
        || test_type == CtcExistenceTest::REVMONO_TAY_LAZY 
        || test_type == CtcExistenceTest::FASTMONO_TAY){
        for (int j=0; j<nb_ctr; j++){
            Interval ev = taylor_eval(j, x, gs,  (test_type == CtcExistenceTest::HAN));
            if (ev.lb()>0 || ev.ub()<0) {
                //for (int i=0; i<x.size(); i++) cout << gs[j][i] << endl;
                //cout << sys.f_ctrs[j].eval(x.mid()) << endl;
                //cout << "x:" << x << " taylor eval:" << ev << endl;
                x.set_empty();
                //CtcExistenceTest::last_remove=0;
                return;
            }
        }
    }


    if (test_type == CtcExistenceTest::MONO_TRAD || 
        test_type == CtcExistenceTest::MONO_NEW || 
        test_type == CtcExistenceTest::REVMONO_TAY ||
        ((test_type==CtcExistenceTest::REVMONO_LAZY || test_type==CtcExistenceTest::REVMONO_TAY_LAZY) 
            && (CtcExistenceTest::last_remove<4 || CtcExistenceTest::last_remove%16==0) ) ){

        bool trad=false;
        if (test_type == CtcExistenceTest::MONO_TRAD) trad=true;

        for (int j=0; j<nb_ctr; j++){

            IntervalVector g(x);
            sys.f_ctrs[j].gradient(x, g);
            

            auto [xmin, error1] = get_monotonic_box(j, x, g, true, 0.95, 1e-5, trad, true);
            //cout << xmin << "," << error1 << endl;
            double lb = sys.f_ctrs[j].eval(xmin).lb() - error1;
            if (lb>0) {
                x.set_empty();
                CtcExistenceTest::last_remove=0;
                return; //f>0
            }

            auto [xmax, error2] = get_monotonic_box(j, x, g, false, 0.95, 1e-5, trad, true);
            //cout << xmax << "," << error2 << endl;
            double ub = sys.f_ctrs[j].eval(xmax).ub() + error2;
            if (ub<0) {
                x.set_empty();
                CtcExistenceTest::last_remove=0;
                return; //f<0
            }

        }
    } 

    CtcExistenceTest::last_remove ++;
	return;
}


} // end namespace ibex

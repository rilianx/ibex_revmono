//============================================================================
//                                  I B E X                                   
// File        : ibex_Ctc3BCID.h
// Author      : Ignacio Araya, Gilles Chabert,
//               Bertrand Neveu, Gilles Trombettoni
// Copyright   : IMT Atlantique (France)
// License     : See the LICENSE file
// Created     : Jul 1, 2012
// Last Update : Jul 20, 2018
//============================================================================

#ifndef __IBEX_CTC_REVISED_MONO_H__
#define __IBEX_CTC_REVISED_MONO_H__

#include "ibex_Ctc.h"
#include "ibex_CtcFwdBwd.h"
#include "ibex_BitSet.h"
#include <list>
#include <variant>

using namespace std;

namespace ibex {


/**
 * \ingroup contractor
 * \brief Revised Monotonicity Test.
 */
class CtcExistenceTest : public Ctc {
public:


	enum Test_type {
		NONE, TAY, HAN, MONO_TRAD, OG, MONO_NEW, MONO_FAST, REVMONO_TAY_LAZY, REVMONO_TAY, FASTMONO_TAY, REVMONO_LAZY
	};

	Test_type test_type;

	static int last_remove;

	/**
	 * \brief Creates a Revised Monotonicity Test object.
	 *
	 */
	CtcExistenceTest(const System& sys, const System& deriv_sys, vector<vector<int>>& occs, Test_type test_type=MONO_NEW, double ratio=0.95, double prec=1e-6) : 
			Ctc(sys.nb_var), nb_ctr(sys.nb_ctr), test_type(test_type), ratio(ratio), occs(occs), prec(prec), sys(sys), deriv_sys(deriv_sys) {
		
		ctc.resize(nb_ctr);
		ctc_leq.resize(nb_ctr);
		ctc_geq.resize(nb_ctr);
		if(test_type != NONE){
			for (int j=0; j<nb_ctr; j++) {
				//partial derivatives of constraint j
				for (int i=0; i<sys.nb_var; i++) {
					ctc[j].push_back(new CtcFwdBwd(deriv_sys.f_ctrs[j*sys.nb_var + i]));
					ctc_leq[j].push_back(new CtcFwdBwd(deriv_sys.f_ctrs[j*sys.nb_var + i],LEQ));
					ctc_geq[j].push_back(new CtcFwdBwd(deriv_sys.f_ctrs[j*sys.nb_var + i],GEQ));
				}
			}
		}
		
	};

	virtual void add_property(const IntervalVector& init_box, BoxProperties& map){}
	

	/**
	 * \brief Delete this.
	 */
	~CtcExistenceTest();

	/**
	 * \brief Contract a box.
	 */
	void contract(IntervalVector& box);


protected:

	pair<IntervalVector, double> identify_min_max_subspace(
		int j, int i, 
		IntervalVector x, 
		IntervalVector x0, 
		variant<int, pair<int, int>> incr, // 0: no incr, 1: incr, -1: decr, pair<int, int>: incr/decr on var
		bool minimization=true, 
		bool taylor=true
	);

	pair<IntervalVector, variant<int,pair<int,int>>> detect_boxes(
		int j, int i,  
		IntervalVector x, 
		double ratio, 
		double prec=1e-5, 
		bool trad=false
	);

	pair<IntervalVector, double> get_monotonic_box(
		int j, //constraint index
		IntervalVector x, 
		IntervalVector& g, 
		bool minimization=true, 
		double ratio=0.95, 
		double prec=1e-5, 
		bool trad=false, 
		bool taylor=true
	);

	Interval taylor_eval(
		int j,  
		IntervalVector& x,
		vector<IntervalVector>& g,
		bool hansen=false
	);

	Interval mono_fast(
    	int j,  
    	IntervalVector x,
		IntervalVector g 
	);

	int nb_ctr; 
	std::vector<vector<Ctc*>> ctc;
	std::vector<vector<Ctc*>> ctc_leq;
	std::vector<vector<Ctc*>> ctc_geq;

	bool traditional;
	double ratio;
	double prec;

	const System& sys;
	const System& deriv_sys;
	vector<vector<int>> occs;
};

} // end namespace ibex
#endif // __IBEX_CTC_3B_CID_H__

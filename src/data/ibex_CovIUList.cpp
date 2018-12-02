//============================================================================
//                                  I B E X
// File        : ibex_CovIUList.cpp
// Author      : Gilles Chabert
// Copyright   : IMT Atlantique (France)
// License     : See the LICENSE file
// Created     : Nov 07, 2018
// Last update : Dec 01, 2018
//============================================================================

#include "ibex_CovIUList.h"

#include <cassert>

using namespace std;

namespace ibex {

CovIUList::CovIUList(const CovIUListFactory& fac) : CovList(fac), nb_inner(0), nb_unknown(0),
		_IU_status(NULL), _IU_inner(NULL), _IU_unknown(NULL) {
	fac.build(*this);
}

CovIUList::CovIUList(const char* filename) : CovIUList((CovIUListFactory&) *CovIUListFile(filename).factory) {

}

CovIUList::~CovIUList() {
	if (_IU_status) {
		delete[] _IU_status;
		delete[] _IU_inner;
		delete[] _IU_unknown;
	}
}

//----------------------------------------------------------------------------------------------------

CovIUListFactory::CovIUListFactory(size_t n) : CovListFactory(n) {

}

CovIUListFactory::~CovIUListFactory() {

}

void CovIUListFactory::add_inner(const IntervalVector& x) {
	add(x);
	inner.push_back(nb_boxes()-1);
}

void CovIUListFactory::add_unknown(const IntervalVector& x) {
	add(x);
}

void CovIUListFactory::build(CovIUList& set) const {
	//assert(set.size == boxes.size());
	(size_t&) set.nb_inner = inner.size();
	(size_t&) set.nb_unknown = set.size - set.nb_inner;
	set._IU_status = new CovIUList::BoxStatus[set.size];
	set._IU_inner    = new IntervalVector*[set.nb_inner];
	set._IU_unknown  = new IntervalVector*[set.nb_unknown];

	for (int i=0; i<set.size; i++) {
		set._IU_status[i]=CovIUList::UNKNOWN; // by default
	}

	for (vector<unsigned int>::const_iterator it=inner.begin(); it!=inner.end(); ++it) {
		set._IU_status[*it]=CovIUList::INNER;
	}

	int jin=0; // count inner boxes
	int juk=0; // count unknown boxes

	for (int i=0; i<set.size; i++) {
		if (set._IU_status[i]==CovIUList::INNER)
			set._IU_inner[jin++]=(IntervalVector*) &set[i];
		else
			set._IU_unknown[juk++]=(IntervalVector*) &set[i];
	}
	assert(jin==set.nb_inner);
	assert(juk==set.nb_unknown);
}

//----------------------------------------------------------------------------------------------------

CovIUListFile::CovIUListFile(const char* filename, CovIUListFactory* _factory) :

		CovListFile(filename, _factory? _factory : new CovIUListFactory(0 /*tmp*/)) {

	CovIUListFactory& fac = * ((CovIUListFactory*) this->factory);

	assert(f); // file descriptor is open by CovFile constructor

	size_t nb_inner = read_pos_int(*f);

	if (nb_inner  > fac.nb_boxes())
		ibex_error("[CovIUListFile]: number of inner boxes exceeds total!");

	if (fac.nb_boxes()==0) return;

	for (size_t i=0; i<nb_inner; i++) {
		unsigned int j=read_pos_int(*f);
		if (j>=fac.nb_boxes()) ibex_error("[CovIUListFile]: invalid inner box index.");
		fac.inner.push_back(j);
	}

	if (fac.inner.size() != nb_inner)
		ibex_error("[CovIUListFile]: number of inner boxes does not match");
}

void CovIUListFile::format(stringstream& ss, const string& title) {
	CovListFile::format(ss, title);

	ss <<   "- 1 line:   1 integer: the number Ni of inner boxes (among N)\n"
			"- 1 line:   Ni integers: the indices of boxes that are inner.\n";
}

//int CovIUListFile::subformat_number() const {
//	return 0;
//}

} /* namespace ibex */

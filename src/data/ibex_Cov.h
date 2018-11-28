//============================================================================
//                                  I B E X
// File        : ibex_Cov.h
// Author      : Gilles Chabert
// Copyright   : IMT Atlantique (France)
// License     : See the LICENSE file
// Created     : Nov 07, 2018
// Last update : Nov 28, 2018
//============================================================================

#ifndef __IBEX_COV_H__
#define __IBEX_COV_H__

#include "ibex_IntervalVector.h"
#include "ibex_BoolInterval.h"
#include "ibex_Solver.h"

#include <vector>
#include <fstream>

namespace ibex {

class CovFactory;

class Cov {
public:

	Cov(const CovFactory&);

	Cov(const char* filename);

	//virtual Cov& operator&=(const Cov& set)=0;

	virtual ~Cov();

	/**
	 * \brief Number of variables
	 */
	const size_t n;


	//	friend class CovFactory;

//	Cov(size_t n);
};

class CovFactory {
public:

	CovFactory();

	CovFactory(size_t n);

	/**
	 * \brief Number of variables
	 */
	size_t n;

	void build(Cov& cov) const;
};

class CovFile {
public:
	/**
	 * \brief Load a COV file.
	 */
	CovFile(const char* filename, CovFactory* factory=NULL);

	/**
	 * \brief Save a covering in a COV file.
	 */
	//CovFile(const Cov&);

	virtual ~CovFile();

	//virtual int subformat_number() const;

	/**
	 * \brief Cover file format version.
	 */
	static const uint32_t FORMAT_VERSION;

	CovFactory* factory;

protected:
	std::ifstream *f;

	static const size_t SIGNATURE_LENGTH;
	static const char*  SIGNATURE;

	int read_signature(std::ifstream& f);
	unsigned int read_pos_int(std::ifstream& f);
	double read_double(std::ifstream& f);

	void write_signature(std::ofstream& f) const;
	void write_int(std::ofstream& f, uint32_t x) const;
	void write_double(std::ofstream& f, double x) const;
};

} /* namespace ibex */

#endif /* __IBEX_COV_H__ */

/* ============================================================================
 * I B E X - Interval Vector definition
 * ============================================================================
 * Copyright   : Ecole des Mines de Nantes (FRANCE)
 * License     : This program can be distributed under the terms of the GNU LGPL.
 *               See the file COPYING.LESSER.
 *
 * Author(s)   : Gilles Chabert
 * Created     : Dec 05, 2011
 * ---------------------------------------------------------------------------- */

#ifndef _IBEX_INTERVAL_VECTOR_H_
#define _IBEX_INTERVAL_VECTOR_H_

#include <cassert>
#include <iostream>
#include <cassert>
#include "ibex_Interval.h"
#include "ibex_InvalidIntervalVectorOp.h"

namespace ibex {

/**
 * \ingroup arith
 *
 * \brief Vector of Intervals
 *
 * By convention an empty vector has a dimension. A vector becomes empty
 * when one of its component becomes empty and all the components
 * are set to the empty Interval.
 */
class IntervalVector {

public:
	/** \brief Create [(-oo,+oo) ; ..; (-oo,+oo)]
	 *
	 * Create a n-sized vector. All the components are (-oo,+oo)
	 */
	IntervalVector(int n);

	/** \brief Create [x; ....; x]
	 *
	 * Create a IntervalVector of dimension \a n with
	 * all the components initialized to \a x.
	 */
	IntervalVector(int dim, const Interval& x);

	/** \brief Create a copy of \a x.
	 */
	IntervalVector(const IntervalVector& x);

	/** \brief Create the IntervalVector [bounds[0][0],bounds[0][1]]x...x[bounds[n-1][0],bounds[n-1][1]]
	 *
	 * @param bounds an nx2 array of doubles
	 */
	IntervalVector(int n, double  bounds[][2]);

	/** \brief Create [empty; ...; empty]
	 *
	 * Create an empty IntervalVector of dimension \a n
	 * (all the components being empty Intervals)
	 */
	static IntervalVector empty(int n);

	/** \brief Delete this vector
	 */
	virtual ~IntervalVector();

	/** \brief Return the ith Interval
	 *
	 * A return a const reference to the
	 * i^th component (starting from 0)
	 */
	const Interval& operator[](int i) const;

	/** \brief The dimension (number of components)
	 */
	int size() const;

	/** \brief Return true iff this IntervalVector is empty
	 */
	bool is_empty() const;

	/** \brief Set this IntervalVector to the empty IntervalVector
	 */
	void set_empty();

	/** \brief Resize the IntervalVector.
	 *
	 * If the size is increased, the existing components are not
	 * modified and the new ones are set to (-inf,+inf), or the
	 * empty Interval if the IntervalVector was empty.
	 */
	void resize(int n2);

	/** \brief Set the lower bound of the ith component of this
	 *
	 * Set the bound unless the IntervalVector was empty in which case the ith component remains
	 * the empty Interval.
	 */
	void set_lb(int i, double lb);

	/** \brief Set the upper bound of the ith component of this
	 *
	 * Set the bound unless the IntervalVector was empty in which case the ith component remains
	 * the empty Interval.
	 */
	void set_ub(int i, double ub);

	/** \brief Assign the ith component to [lb,ub]
	 *
	 * Assign unless the IntervalVector was empty in which case the ith component remains
	 * the empty Interval.
	 */
	void set(int i, double lb, double ub);

	/** \brief Assign the ith component to x:
	 *
	 * Assignment unless the IntervalVector was empty in which case the ith component remains
	 * the empty Interval. If x is the empty Interval, the IntervalVector becomes empty.
	 */
	void set(int i, const Interval& x);

	/** \brief Assign this IntervalVector to x.
	 *
	 * Dimensions of this and x must match. Emptiness is overridden.
	 */
	IntervalVector& operator=(const IntervalVector& x);

	/** \brief Return the midpoint (a degenerated IntervalVector)
	 */
	IntervalVector mid() const;

	/** \brief Return true iff this IntervalVector is flat
	 *
	 * An IntervalVector is "flat" if the radius is 0 on at least one dimension
	 */
	bool is_flat() const;

	/** \brief Return true if the bounds of this IntervalVector match that of "x".
	 */
	bool operator==(const IntervalVector& x) const;

	/** \brief Return the index of the component with minimal/maximal diameter
	 *
	 *  @param min true => minimal diameter
	 *  @throws InvalidIntervalVectorOp if the IntervalVector is empty.
	 */
	int extr_diam_index(bool min) const;

	/** \brief Return the maximal diameter for all the components
	 *
	 *  @throws InvalidIntervalVectorOp if the IntervalVector is empty.
	 */
	double max_diam() const;

	/** \brief Return the minimal diameter for all the components
	 *
	 *  @throws InvalidIntervalVectorOp if the IntervalVector is empty.
	 */
	double min_diam() const;

	/** \brief Intersects the ith component of this IntervalVector with another Interval.
	 *
	 * @return true iff the intersection is nonempty
	 */
	bool set_to_inter(int i, const Interval& x);

	/** \brief Intersects this IntervalVector with another.
	 *
	 * @return true iff the intersection is nonempty
	 * @throws InvalidIntervalVectorOp if IntervalVectores do not have the same dimensions
	 * and dimensions are not 0 (special case for the empty IntervalVector).
	 */
	bool set_to_inter(const IntervalVector& x);

	/** \brief Set the ith component of this IntervalVector to the hull with another Interval.
	 */
	void set_to_hull(int i, const Interval& x);

	/** \brief Set this IntervalVector to the hull of itself and another.
	 *
	 * @throws InvalidIntervalVectorOp if IntervalVectores do not have the same dimensions
	 * and dimensions are not 0 (special case for the empty IntervalVector).
	 */
	void set_to_hull(const IntervalVector& x);

	/** \brief Return this \ y (set difference)
	 *
	 * Store the tmp, under the form of a union of non-overlapping IntervalVectors,
	 * into result, and return the size of the union.
	 */
	int diff(const IntervalVector& y, IntervalVector**& result) const;

	/** \brief Return the complementary of this IntervalVector
	 *
	 * Store the tmp, under the form of a union of non-overlapping IntervalVectors,
	 * into result, and return the size of the union.
	 */
	int complementary(IntervalVector**& result) const;

	/** \brief Return a random vector (degenerated box)
	 */
	IntervalVector random() const;

	/** \brief Return the intersection of this and x.
	 * @see inter(const IntervalVector& x)
	 */
	IntervalVector operator&(const IntervalVector& x) const;

	/** \brief Return the hull of this & x.
	 *
	 * @see set_to_hull(const IntervalVector& x)
	 */
	IntervalVector operator|(const IntervalVector& x) const;

	/** \brief Opposite of this
	 */
	IntervalVector operator-() const;

	/** \brief Sum of this and x
	 */
	IntervalVector operator+(const IntervalVector& x) const;

	/** \brief Add x to this
	 */
	IntervalVector& operator+=(const IntervalVector& x);

	/** \brief Subtraction of this and x
	 */
	IntervalVector operator-(const IntervalVector& x) const;

	/** \brief Subtract x to this
	 */
	IntervalVector& operator-=(const IntervalVector& x);
private:

	int n;             // dimension (size of vec)
	Interval *vec;	   // vector of elements

};

/** \brief Display the IntervalVector \a x
 */
inline std::ostream& operator<<(std::ostream& os, const IntervalVector& x) {
	os << "(";
	for (int i=0; i<x.size(); i++)
		os << x[i] << (i<x.size()-1? " ; " : "");
	os << ")";
	return os;
}

/*================================== inline implementations ========================================*/

inline IntervalVector::IntervalVector(int n) : n(n), vec(new Interval[n]) {
	assert(n>=1);
}

inline IntervalVector::IntervalVector(int n, const Interval& x) : n(n), vec(new Interval[n]) {
	assert(n>=1);
	for (int i=0; i<n; i++) {
		vec[i]=x;
	}
}

inline IntervalVector::IntervalVector(const IntervalVector& x) : n(x.n), vec(new Interval(x.n)) {
	for (int i=0; i<n; i++) {
		vec[i]=x[i];
	}
}

inline IntervalVector::IntervalVector(int n, double bounds[][2]) : n(n), vec(new Interval[n]) {
	for (int i=0; i<n; i++)
		vec[i]=Interval(bounds[i][0],bounds[i][1]);
}

inline IntervalVector IntervalVector::empty(int n) {
	return IntervalVector(n, Interval::EMPTY_SET);
}


inline IntervalVector::~IntervalVector() {
	delete[] vec;
}

inline const Interval& IntervalVector::operator[](int i) const {
	assert(i>=0 && i<n);
	return vec[i];
}

inline int IntervalVector::size() const {
	return n;
}

bool IntervalVector::is_empty() const {
	return (*this)[0].is_empty();
}

inline void IntervalVector::set_empty() {
	// warning: do not insert this test:
	//	 if (isEmpty()) return;
	// because we call set_empty() from set(...) and the first component
	// may be empty in an intermediate state

	for (int i=0; i<n; i++)
		vec[i]=Interval::EMPTY_SET;
}

inline void IntervalVector::resize(int n2) {
	assert(n2>=1);
	if (n2==n) return;

	Interval* newVec=new Interval[n2];
	int i=0;
	for (; i<n && i<n2; i++)
		newVec[i]=vec[i];
	for (; i<n2; i++)
		newVec[i]=is_empty()? Interval::EMPTY_SET : Interval::ALL_REALS;
	delete[] vec;

	n   = n2;
	vec = newVec;
}

inline void IntervalVector::set_lb(int i, double lb) {
	if (!is_empty()) {
		assert(lb<=vec[i].ub());
		vec[i]=Interval(lb, vec[i].ub());
	}
}

inline void IntervalVector::set_ub(int i, double ub) {
	if (!is_empty()) {
		assert(ub>=vec[i].lb());
		vec[i]=Interval(vec[i].lb(),ub);
	}
}

inline void IntervalVector::set(int i, double lb, double ub) {
	if (!is_empty()) {
		assert(ub>=lb);
		vec[i]=Interval(lb,ub);
	}
}


inline void IntervalVector::set(int i, const Interval& x) {
	if (x.is_empty()) set_empty();
	else set(i, x.lb(), x.ub());
}

inline IntervalVector& IntervalVector::operator=(const IntervalVector& x) {
	assert(size()==x.size()); // throw InvalidIntervalVectorOp("Cannot set a IntervalVector to a IntervalVector with different dimension");

	if (x.is_empty())
		set_empty();
	else
		// don't use "set(...)" because the test "is_empty()" called inside
		// may return prematurely in case "this" is empty.
		// use physical copy instead:
		for (int i=0; i<size(); i++)
			vec[i]=x[i];

	return *this;
}

inline IntervalVector IntervalVector::mid() const {
	IntervalVector mIntervalVector(size());
	for (int i=0; i<size(); i++) {
		Interval m =  (*this)[i].mid();
		mIntervalVector.set(i, m);
	}
	return mIntervalVector;
}

inline bool IntervalVector::is_flat() const {
	if (is_empty()) return false;
	for (int i=0; i<n; i++)
		if ((*this)[i].is_degenerated()) // don't use diam() because of roundoff
			return true;
	return false;
}

/*
bool IntervalVector::operator==(const IntervalVector& x) const {
	if (n!=x.size()) return false;
	if (is_empty() || x.is_empty()) return is_empty() && x.is_empty();
	for (int i=0; i<n; i++)
		if (!(*this)[i].set_eq(x[i])) return false;
	return true;
}*/

inline int IntervalVector::extr_diam_index(bool min) const {
	double d=min? POS_INFINITY : -1;
	int selectedIndex=-1;
	if (is_empty()) throw InvalidIntervalVectorOp("Diameter of an empty IntervalVector is undefined");
	for (int i=0; i<n; i++) {
		double w=(*this)[i].diam();
		if (min? w<d : w>d) {
			selectedIndex=i;
			d=w;
		}
	}
	return selectedIndex;
}

inline double IntervalVector::max_diam() const {
	return (*this)[extr_diam_index(false)].diam();
}

inline double IntervalVector::min_diam() const {
	return (*this)[extr_diam_index(true)].diam();
}

inline bool IntervalVector::set_to_inter(int i, const Interval& x) {
	//if (x.isEmpty()) { set_empty(); return false; }
	//if (is_empty()) return false;
	vec[i] &= x;
	if (vec[i].is_empty()) { set_empty(); return false; }
	return true;
}

inline bool IntervalVector::set_to_inter(const IntervalVector& x)  {
	// dimensions are non zero henceforth
	if (size()!=x.size()) throw InvalidIntervalVectorOp("Cannot intersect IntervalVectores with different dimensions");

	if (is_empty()) return false;
	if (x.is_empty()) { set_empty(); return false; }

	for (int i=0; i<size(); i++) {
		if (!set_to_inter(i,x[i]))
			set_empty();
		return false;
	}
	return true;
}

inline void IntervalVector::set_to_hull(int i, const Interval& x) {
	vec[i] |= x;
}

inline void IntervalVector::set_to_hull(const IntervalVector& x)  {
	// dimensions are non zero henceforth
	if (size()!=x.size()) throw InvalidIntervalVectorOp("Cannot make the hull of IntervalVectores with different dimensions");

	if (x.is_empty()) return;
	if (is_empty()) { *this=x; return; }

	for (int i=0; i<size(); i++) {
		set_to_hull(i, x[i]);
	}
}

inline IntervalVector IntervalVector::operator&(const IntervalVector& x) const {
	IntervalVector y(*this);
	y.set_to_inter(x);
	return y;
}

IntervalVector IntervalVector::operator|(const IntervalVector& x) const {
	IntervalVector y(*this);
	y.set_to_hull(x);
	return y;
}

inline IntervalVector IntervalVector::operator-() const {
	IntervalVector x(size());
	for (int i=0; i<size(); i++) {
		x.set(i,-(*this)[i]);
	}
	return x;
}

inline IntervalVector IntervalVector::operator+(const IntervalVector& x) const {
	const int n=size();
	assert(x.size()==n);
	if (is_empty() || x.is_empty()) return empty(n);
	else {
		IntervalVector y(n);
		for (int i=0; i<n; i++) {
			(y.vec[i]=(*this)[i])+=x[i]; // faster than y[i]=(*this)[i]+x[i]
		}
		return y;
	}
}

inline IntervalVector& IntervalVector::operator+=(const IntervalVector& x) {
	const int n=size();
	assert(x.size()==n);
	if (!is_empty()) {
		if (x.is_empty()) { set_empty(); }
		else {
			for (int i=0; i<n; i++) {
				vec[i]+=x[i];
			}
		}
	}
	return *this;
}

inline IntervalVector IntervalVector::operator-(const IntervalVector& x) const {
	const int n=size();
	assert(x.size()==n);
	if (is_empty() || x.is_empty()) return empty(n);
	else {
		IntervalVector y(n);
		for (int i=0; i<n; i++) {
			(y.vec[i]=(*this)[i])-=x[i]; // faster than y[i]=(*this)[i]-x[i]
		}
		return y;
	}
}

inline IntervalVector& IntervalVector::operator-=(const IntervalVector& x) {
	const int n=size();
	assert(x.size()==n);
	if (!is_empty()) {
		if (x.is_empty()) { set_empty(); }
		else {
			for (int i=0; i<n; i++) {
				vec[i]-=x[i];
			}
		}
	}
	return *this;
}

} // end namespace

#endif /* _IBEX_INTERVAL_VECTOR_H_ */

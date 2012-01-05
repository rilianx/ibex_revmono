/* ============================================================================
 * I B E X - Exceptions raised by invalid operations on interval vectors
 * ============================================================================
 * Copyright   : Ecole des Mines de Nantes (FRANCE)
 * License     : This program can be distributed under the terms of the GNU LGPL.
 *               See the file COPYING.LESSER.
 *
 * Author(s)   : Gilles Chabert
 * Created     : Dec 08, 2011
 * ---------------------------------------------------------------------------- */

#ifndef _INVALID_INTERVAL_VECTOR_OP_H_
#define _INVALID_INTERVAL_VECTOR_OP_H_

#include "ibex_Exception.h"

namespace ibex {

/** \ingroup arith
 *
 * \brief Base class for all exceptions raised by an operation on an interval vector
 *
 */
class InvalidIntervalVectorOp : public Exception {
public:
	/** \brief Create the exception with associated message
	 */
	InvalidIntervalVectorOp(const std::string& msg);
};


} // namespace ibex

#endif // _INVALID_INTERVAL_VECTOR_OP_H_

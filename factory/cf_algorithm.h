/* emacs edit mode for this file is -*- C++ -*- */
/* $Id: cf_algorithm.h,v 1.1 1997-08-29 07:40:05 schmidt Exp $ */

#ifndef INCL_CF_ALGORITHM_H
#define INCL_CF_ALGORITHM_H

//{{{ docu
//
// cf_algorithm.h - declarations of higher level algorithms.
//
// This header file collects declarations of most of the
// functions in factory which implement higher level algorithms
// on canonical forms (factorization, gcd, etc.).
//
// This header file corresponds to:
// cf_chinese.cc
//
//}}}

#include <config.h>

#include "canonicalform.h"

/*BEGINPUBLIC*/

//{{{ declarations from cf_chinese.cc
void chineseRemainder( const CanonicalForm x1, const CanonicalForm q1, const CanonicalForm x2, const CanonicalForm q2, CanonicalForm & xnew, CanonicalForm & qnew );

void chineseRemainder( const CFArray & x, const CFArray & q, CanonicalForm & xnew, CanonicalForm & qnew );
//}}}

/*ENDPUBLIC*/

#endif /* ! INCL_CF_ALGORITHM_H */

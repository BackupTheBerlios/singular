#ifndef SPARSEMAT_H
#define SPARSEMAT_H
/*******************************************************************
 *  Computer Algebra System SINGULAR
 *
 *  sparsmat.h: operations with sparse matrices
 *          (bareis, ...)
 *
 *******************************************************************/
/* $Id: sparsmat.h,v 1.5 2000-02-09 08:45:16 pohl Exp $ */


poly smMult(poly, poly);
void smPolyDiv(poly, poly);
poly smMultDiv(poly, poly, const poly);
void smSpecialPolyDiv(poly, poly);
/* ----------------- macros ------------------ */
#define OLD_DIV 1

#ifdef OLD_DIV
#define SM_MULT(A,B,C) smMult(A,B)
#define SM_DIV smPolyDiv
#else
#define SM_MULT smMultDiv
#define SM_DIV smSpecialPolyDiv
#endif

poly smCallDet(ideal I);
lists smCallBareiss(ideal smat, int x, int y);
lists smCallNewBareiss(ideal smat, int x, int y);

#endif

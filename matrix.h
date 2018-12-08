/**The header for the matrix.c
 * @Name:Xiaowei Wu
 * @Student#: 250998870
 * @Date 2018-12-04
 */

#ifndef ASN5_MATRIX_H
#define ASN5_MATRIX_H



#include "bstree.h"
typedef BStree Matrix;
typedef char* Index;
typedef int Value;
Matrix matrix_construction(void);
unsigned char matrix_isin(Matrix m, Index index1, Index index2);
Value *matrix_get(Matrix m, Index index1, Index index2);
void matrix_set(Matrix m, Index index1, Index index2, Value value);
void matrix_inc(Matrix m, Index index1, Index index2, Value value);
void matrix_list(Matrix m);
void matrix_destruction(Matrix m);
#endif //ASN5_MATRIX_H
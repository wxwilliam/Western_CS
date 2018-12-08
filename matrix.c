/**The the matrix structure for the main function.
 * @Name:Xiaowei Wu
 * @Student#: 250998870
 * @Date 2018-12-04
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "matrix.h"
/**
 * Matrix construction using bstree ini();
 * @return it return a pointer of matrix in the Matrix structure
 */
Matrix matrix_construction(void){
    Matrix m = (Matrix) bstree_ini();
    return m;
}
/**
 * If location (index1, index2) is defined in Matrix m, then return 1. Otherwise, return 0.
 * @param m it is a pointer to the Matrix that point to the binary tree
 * @param index1 it is a pointer to the Index structure
 * @param index2 it is a pointer to the Index structure
 * @return it will return 1 if the location is in the matrix, return 0 if nothing find
 */
unsigned char matrix_isin(Matrix m, Index index1, Index index2){
    Key k = key_gen(index1,index2);
    Data a = bstree_search(m,k);
    if (a != NULL){
        return 1;
    }
    else {
        return 0;
    }
}
/**
 * If location (index1, index2) is defined in Matrix m,
 * then return a pointer to the associated value. Otherwise, return NULL.
 * @param m it is a pointer to the Matrix that point to the binary tree
 * @param index1 it is a pointer to the Index structure
 * @param index2 it is a pointer to the Index structure
 * @return it will return a pointer of data if anything is found, or it will return NULL
 */
Value *matrix_get(Matrix m, Index index1, Index index2) {
    if (matrix_isin(m,index1,index2) == 1){
        int *d = (*(&(*(&(*m)))))->data;
        return d;
    }
    else {
        return NULL;
    }
}
/**
 * Assign value to Matrix m at location (index1, index2).
 * If that location already has value, then overwrite.
 * @param m it is a pointer to the Matrix that point to the binary tree
 * @param index1 it is a pointer to the Index structure
 * @param index2 it is a pointer to the Index structure
 * @param value it is a pointer to the Value structure
 */
void matrix_set(Matrix m, Index index1, Index index2, Value value){
    int *p;
    if (matrix_isin(m,index1,index2) == 1){
        p = matrix_get(m,index1,index2);
        data_set(p,value);
    }
    else{
        bstree_insert(m,key_gen(index1,index2),data_gen(value));
    }
}
/**
 * If location (index1, index2) is defined in Matrix m,
 * then increase the associated value by value. Otherwise, report error.
 * If that location already has value, then overwrite.
 * @param m it is a pointer to the Matrix that point to the binary tree
 * @param index1 it is a pointer to the Index structure
 * @param index2 it is a pointer to the Index structure
 * @param value it is a pointer to the Value structure
 */
void matrix_inc(Matrix m, Index index1, Index index2, Value value){
    int *p;
    Value d;
    if (matrix_isin(m,index1,index2) == 1) {
        p = matrix_get(m,index1,index2);
        d = *p + value;
        matrix_set(m,index1,index2,d);
    }
    else {
        printf("AN ERROR HAS BEEN OCCORED\n");
        exit(0);
    }
}
/**
 * Print indices and values in the Matrix m (with bstree traversal()).
 * @param m it is a pointer to the Matrix that point to the binary tree
 */
void matrix_list(Matrix m){
    bstree_traversal(&(*m));
}
/**
 * Free allocated space (with bstree free()).
 * @param m it is a pointer to the Matrix that point to the binary tree
 */
void matrix_destruction(Matrix m){
    bstree_free(m);
}
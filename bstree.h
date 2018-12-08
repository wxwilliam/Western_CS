/**The header for the bstree.c
 * @Name:Xiaowei Wu
 * @Student#: 250998870
 * @Date 2018-12-04
 */

#ifndef ASN5_BSTREE_H
#define ASN5_BSTREE_H


#include "datatype.h"
typedef struct BStree_node {
    Key key;
    Data data;
    struct BStree_node *left, *right;
} BStree_node;
typedef BStree_node** BStree;
BStree bstree_ini(void);
void bstree_insert(BStree bst, Key key, Data data);
BStree_node *new_node(Key key, Data data);
Data bstree_search(BStree bst, Key key);
void bstree_traversal(BStree bst);
void bstree_free(BStree bst);

#endif //ASN5_BSTREE_H
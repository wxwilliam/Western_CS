/**The header for bst.c
 * @Name:Xiaowei Wu
 * @Student#: 250998870
 * @Date 2018-11-15
 */
#ifndef CS2211_ASN4_P1_BST_H
#define CS2211_ASN4_P1_BST_H
#endif //CS2211_ASN4_P1_BST_H
#include "data.h"
typedef struct {Node *tree_nodes; unsigned char *is_free; int size;} BStree_struct;
typedef BStree_struct* BStree;
BStree bstree_ini(int size);
void bstree_insert(BStree bst, Key *key, int data);
void bstree_traversal(BStree bst);
void bstree_free(BStree bst);
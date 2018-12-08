/**The binary search tree structure for the matrix calculation
 * @Name:Xiaowei Wu
 * @Student#: 250998870
 * @Date 2018-12-04
 */
#include <stdio.h>
#include <stdlib.h>
#include "bstree.h"
/**
 * Allocate memory of type BStree node*, set the value to NULL,
 * and return a pointer to the allocated memory.
 * @return it will return a pointer of tree
 */
BStree bstree_ini(void){
    BStree tree;
    tree = (BStree_node**) malloc(sizeof(BStree));
    *tree = NULL;
    return tree;
}
/**
 * Insert data with key into bst. If key is in bst, then do nothing.
 * @param bst it is a pointer of binary tree
 * @param key it is a pointer of key that will be insert
 * @param data it is a pointer of data that will be insert
 */
void bstree_insert(BStree bst, Key key, Data data){
    if ((*bst) == NULL){
        *bst = new_node(key,data);
    }
    else {
        if (key_comp(key,(*bst)->key) < 0){
            bstree_insert(&(*bst)->left,key,data);
        }
        else if (key_comp(key,(*bst)->key) > 0){
            bstree_insert(&(*bst)->right,key,data);
        }
        else{
            ;
        }
    }
}
/**
 * A helper function of bstree_insert, it will
 * create a pointer to a tree node from key and data.
 * @param key it is a pointer of key that will be put into the node
 * @param data it is a pointer of data that will be put into the node
 * @return it will return a pointer of node
 */
BStree_node *new_node(Key key, Data data){
    BStree_node *node;
    node = (BStree_node *) malloc(sizeof(BStree_node));
    node->data = data;
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    return node;
}
/**
 * If key is in bst, return key’s associated data. If key is not in bst, return NULL.
 * @param bst it is a pointer of binary tree
 * @param key it is a pointer of key that will be searched in the binary tree
 * @return it will return the data that paired will the key if there is one, otherwise will return NULL
 */
Data bstree_search(BStree bst, Key key) {
    if (*bst == NULL) {
        return NULL;
    }
    if (key_comp((*bst)->key, key) > 0) {
        return bstree_search(&(*bst)->left, key);
    }
    else if (key_comp((*bst)->key, key) < 0) {
        return bstree_search(&(*bst)->right, key);
    }
    else if (key_comp((*bst)->key, key) == 0) {
        return (*bst)->data;
    }
}
/**
 * In order traversal of bst and print each node’s key and data.
 * @param bst it is a pointer of binary tree
 */
void bstree_traversal(BStree bst){
    if (*bst == NULL){
        return;
    }
    else {
        bstree_traversal(&(*bst)->left);
        key_print((*bst)->key);
        data_print((*bst)->data);
        bstree_traversal(&(*bst)->right);
    }
}
/**
 * Free all the dynamically allocated memory of bst.
 * @param bst it is a pointer of binary tree
 */
void bstree_free(BStree bst){
    if (*bst == NULL){
        return;
    }
    bstree_free(&(*bst)->left);
    bstree_free(&(*bst)->right);
    key_free((*bst)->key);
    data_free((*bst)->data);
}
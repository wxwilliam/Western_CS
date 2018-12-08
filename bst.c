/**The BStree structure of the Binary search tree.
 * @Name:Xiaowei Wu
 * @Student#: 250998870
 * @Date 2018-11-15
 */
#include <stdio.h>
#include <stdlib.h>
#include "bst.h"
void treeInsert_help(int i,BStree bst,Node node);
void treeTravel_help(int i,BStree bst);
// Input: ’size’: size of an array
// Output: a pointer of type BStree,
// i.e. a pointer to an allocated memory of BStree_struct type
// Effect: dynamically allocate memory of type BStree_struct
// allocate memory for a Node array of size+1 for member tree_nodes
// allocate memory for an unsigned char array of size+1 for member is_free
// set all entries of is_free to 1
// set member size to ’size’;
BStree bstree_ini(int size){
    BStree bst = (BStree) malloc(sizeof(BStree_struct));
    bst->tree_nodes = (Node *) malloc((size +1)* sizeof(int));
    bst->is_free = (unsigned char *) malloc((size +1)* sizeof(char));
    int i;
    for(i=0;i<size+1;i++){
        bst->is_free[i] = '1';
    }
    bst->size = size;
    return bst;
}
// Input: ’bst’: a binary search tree
// ’key’: a pointer to Key
// ’data’: an integer
// Effect: ’data’ with ’key’ is inserted into ’bst’
// if ’key’ is already in ’bst’, do nothing
void bstree_insert(BStree bst,Key *key, int data){
    int i = 1;
    Node node;
    node.key = key;
    node.data = data;
    treeInsert_help(i,bst,node);
}
/**
 *This is a helper function for the bstree_insert()
 * The function is a recursion function that will find the free node of tree
 * and insert the node.
 * @param i it is an index which shows the root of the tree.
 * @param bst the Binary search tree.
 * @param node
 */
void treeInsert_help(int i,BStree bst,Node node){
    if (i >= bst->size){
        printf("The Limit has reached");
        exit(0);
    }
    if (bst->is_free[i]){
        bst->tree_nodes[i] = node;
        bst->is_free[i] = 0;
    }
    else if (key_comp(*bst->tree_nodes[i].key,*node.key) > 0){
        treeInsert_help(2*i,bst,node);
    }
    else if (key_comp(*bst->tree_nodes[i].key,*node.key) < 0){
        treeInsert_help(2*i+1,bst,node);
    }
}
// Input: ’bst’: a binary search tree
// Effect: print all the nodes in bst using in order traversal
void bstree_traversal(BStree bst){
    int index = 1;
    treeTravel_help(index,bst);
}
/**
 * This function is a helper function for bstree_traversal()
 * The function is a recursion function that will print the
 * binary search tree in order.
 * @param i
 * @param bst
 */
void treeTravel_help(int i,BStree bst){
    if (i >= bst->size || bst->is_free[i] == '1'){
        return;
    }
    else{
        treeTravel_help(2*i,bst);
        print_node(bst->tree_nodes[i]);
        treeTravel_help(2*i+1,bst);
    }
}
// Input: ’bst’: a binary search tree
// Effect: all memory used by bst are freed
void bstree_free(BStree bst){
    free(bst->tree_nodes);
    free(bst->is_free);
    free(bst);
}
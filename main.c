/**The main function of the Binary search tree.
 * @Name:Xiaowei Wu
 * @Student#: 250998870
 * @Date 2018-11-15
 */
#include <stdio.h>
#include "bst.h"
int main(void) {
    BStree bst;
    bst = bstree_ini(1000);
    bstree_insert(bst, key_construct("Once", 1), 11);
    bstree_insert(bst, key_construct("Upon", 22), 2);
    bstree_insert(bst, key_construct("a", 3), 33);
    bstree_insert(bst, key_construct("Time", 4), 44);
    bstree_insert(bst, key_construct("is", 5), 55);
    bstree_insert(bst, key_construct("filmed", 6), 66);
    bstree_insert(bst, key_construct("in", 7), 77);
    bstree_insert(bst, key_construct("Vancouver", 8), 88);
    bstree_insert(bst, key_construct("!", 99), 9);
    bstree_insert(bst, key_construct("Once", 5), 50);
    bstree_insert(bst, key_construct("Once", 1), 10);
    bstree_traversal(bst);
    bstree_free(bst);
}
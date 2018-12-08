/**The the key and data structure for the binary search tree
 * @Name:Xiaowei Wu
 * @Student#: 250998870
 * @Date 2018-12-04
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "datatype.h"
/**
 * Duplicate string pointed to by str with dynamic memory allocation.
 * @param str it is a pointer
 * @return the fuction will return a copied dynamic location for the parameter str
 */
char * string_dup(char *str){
    char *strin;
    strin = (char *) malloc(sizeof(str));
    strcpy(strin,str);
    return strin;
}
/**
 * Generate a key with dynamic memory allocation.
 * @param skey1 it is a pointer of key in the Key structure
 * @param skey2 it is a pointer of key in the Key structure
 * @return it will return a pointer of the key just generate
 */
Key key_gen(char *skey1, char *skey2){
    Key k;
    k = (Key) malloc(sizeof(Key));
    k->skey1 = string_dup(skey1);
    k->skey2 = string_dup(skey2);
    return k;
}
/**
 * Use strcmp( ) to do comparison. If key1->skey1 and key2->skey1 are different, then they determine the comparison result.
 * If key1->skey1 and key2->skey1 are the same, then key1->skey2 and key2->skey2 determine the comparison result.
 * @param key1 it is a key
 * @param key2 it is a key
 * @return it will return the comparison result
 */
int key_comp(Key key1, Key key2){
    if (strcmp(key1->skey1,key2->skey1) == 0){
        return strcmp(key1->skey2,key2->skey2);
    }
    return strcmp(key1->skey1,key2->skey1);
}
/**
 * Print a key.
 * @param key
 */
void key_print(Key key){
    printf("%s         %s", key->skey1,key->skey2);
}
/**
 * Free memory allocated for key.
 * @param key
 */
void key_free(Key key){
    free(key);
}
/**
 * Generate a data with dynamic memory allocation.
 * @param idata it is a integer of data for the data structure
 * @return it will return a pointer of data just generate
 */
Data data_gen(int idata){
    Data d;
    d = (Data) malloc(sizeof(Data));
    *d = idata;
    return d;
}
/**
 * Assign data with idata.
 * @param data the location of a data
 * @param idata a integer of data
 */
void data_set(Data data, int idata){
    *data = idata;
}
/**
 * Print a data.
 * @param data
 */
void data_print(Data data){
    printf("        %d\n",*data);
}
/**
 * Free memory allocated for data.
 * @param data
 */
void data_free(Data data){
    free(data);
}
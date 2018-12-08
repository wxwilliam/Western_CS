/**The header of data.c
 * @Name:Xiaowei Wu
 * @Student#: 250998870
 * @Date 2018-11-15
 */

#ifndef CS2211_ASN4_P1_DATA_H
#define CS2211_ASN4_P1_DATA_H

#endif //CS2211_ASN4_P1_DATA_H
typedef struct {char *name; int id;} Key;
typedef struct {Key *key; int data;} Node;
Key *key_construct(char *in_name, int in_id);
int key_comp(Key key1, Key key2);
void print_key(Key *key);
void print_node(Node node);
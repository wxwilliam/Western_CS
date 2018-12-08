/**The main function for the matrix .
 * @Name:Xiaowei Wu
 * @Student#: 250998870
 * @Date 2018-12-04
 */
#include <stdio.h>
#include <stdlib.h>
#include "bstree.h"
#include "datatype.h"
#include "matrix.h"
int main() {
    Matrix m = matrix_construction();
    int quit = 0;
    do {
        char a[100], b[100];
        char q, k;
        printf("Insert the first element in matrix: \n");
        scanf("%s", a);
        printf("Insert the second element in matrix: \n");
        scanf("%s", b);
        matrix_set(m, a, b, 1);
        if (matrix_isin(m, a, b) == 1) {
            matrix_inc(m, a, b, 1);
        }
        printf("Continue? Yes or No (Enter Y or N): \n");
        scanf("%c", &q);
        scanf("%c", &k);
        if (k == 'Y') {
            quit = 1;
        } else {
            quit = 0;
        }
    } while (quit == 1);
    printf("String 1    String 2   Occurrence\n");
    matrix_list(m);
    matrix_destruction(m);
}
/**This program is a watch display.
 * @Name:Xiaowei Wu
 * @Student#: 250998870
 * @Date 2018-10-30
 */
#include <stdio.h>
#include <stdlib.h>
/**
 * The program will ask user to input the integer and it will print out the integer using seven-segment display.
 */
int num_def(char n);
int main() {
    const char segements[10][3][3] =
            { {{' ', '_', ' '}, {'|', ' ', '|'}, {'|', '_', '|'}},
              {{' ', ' ', ' '}, {' ', '|', ' '}, {' ', '|', ' '}},
              {{' ', '_', ' '}, {' ', '_', '|'}, {'|', '_', ' '}},
              {{' ', '_', ' '}, {' ', '_', '|'}, {' ', '_', '|'}},
              {{' ', ' ', ' '}, {'|', '_', '|'}, {' ', ' ', '|'}},
              {{' ', '_', ' '}, {'|', '_', ' '}, {' ', '_', '|'}},
              {{' ', '_', ' '}, {'|', '_', ' '}, {'|', '_', '|'}},
              {{' ', '_', ' '}, {' ', '|', ' '}, {' ', '|', ' '}},
              {{' ', '_', ' '}, {'|', '_', '|'}, {'|', '_', '|'}},
              {{' ', '_', ' '}, {'|', '_', '|'}, {' ', '_', '|'}}};
    int input;
    int bool = 0;
    char quit;
    char skip;
    printf("--------------------------Watch Display--------------------------\n");
    while (bool == 0) {
        printf("Please Enter the Integer:\n");
        int i;
        int count=0;
        char num[100];
        for (i=0;i<100;i++){
            scanf("%c",&num[i]);
            count++;
            if (num[i] == '\n'){
                break;
            }
        }
        int a;
        int b;
        for (a=0;a<3;a++) {
            for (b=0;b<count-1;b++) {
                for (i=0;i<3;i++) {
                    printf("%c",segements[num_def(num[b])][a][i]);

                }
            }
            printf("\n");
        }
        while (bool == 0) {
            printf("Do you want to continue? Y or N:\n");
            scanf("%c", &quit);
            scanf("%c", &skip);
            if (quit == 'Y') {
                bool = 0;
                break;
            } else if (quit == 'N') {
                exit(EXIT_FAILURE);
            } else {
                printf("Invalid Input, Please Try Again.\n");
            }
        }
    }
}
/**
 * The function will transfer the input character into an integer.
 * @param n is the input character.
 * @return it will return the number character as a integer.
 */
int num_def(char n){
    if (n == '0'){
        return 0;
    }
    else if (n == '1'){
        return 1;
    }
    else if (n == '2'){
        return 2;
    }
    else if (n == '3'){
        return 3;
    }

    else if (n == '4'){
        return 4;
    }
    else if (n == '5'){
        return 5;
    }
    else if (n == '6') {
        return 6;
    }

    else if (n == '7'){
        return 7;
    }
    else if (n == '8'){
        return 8;
    }
    else if (n == '9') {
        return 9;
    }
}
/**This program is a exponential number calculator.
 * @Name:Xiaowei Wu
 * @Student#: 250998870
 * @Date 2018-10-04
 */
#include <stdio.h>
#include <stdlib.h>
double exp_calculator (double base, int exponent);
int main() {
    double base;
    int exponent;
    int quit = 0;
    printf("----------------Exponential Number Calculator----------------\n");
    while(quit == 0) {
        printf("Enter the base:\n");
        scanf("%lf", &base);
        if (base > 0) {
            quit = 1;
            printf("Enter the exponent:\n");
            scanf("%d", &exponent);
            if (exponent < 0) {
                exponent = abs(exponent);
                printf("The answer is '%.2lf'\n", 1 / exp_calculator(base, exponent));
            } else {
                printf("The answer is '%.2lf'\n", exp_calculator(base, exponent));
            }
        }
        else{
            printf("Invalid Input,Please try again.\n");
        }
    }
}
/**
 * The function will use recursive function to calculate the exponential number.
 * @param base this param will be the base of the exponential number that user want to calculate.
 * @param exponent this param will be the exponent of the exponential number that user want to calculate.
 * @return the function will return the answer of the exponential number calculation.
 */
double exp_calculator (double base, int exponent){
    if (exponent==0){
        return 1;
    }
    else if (exponent==1){
        return base;
    }
    if (exponent%2==0){
        double num = exp_calculator(base,exponent/2);
        return num * num;
    }
    else{
        double num = exp_calculator(base,(exponent-1)/2);
        return num * num * base;
    }
}
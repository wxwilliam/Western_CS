/**This is a Pi calculator.
 * @Name:Xiaowei Wu
 * @Student#: 250998870
 * @Date 2018-11-15
 */
#include <stdio.h>
/**
 * The program is to calculate the mathematical constant of π
 * where n is the smallest integer such that 4*2(n+1)−1 < ǫ for an user entered small (doubleprecision) number ǫ
 * the number ǫ is the values that user input.
 * @return
 */
int main(){
    double insert;
    double result = 0.0000;
    int i;
    printf("----------------------Pi Calculator----------------------\n");
    printf("Enter the values: ");
    scanf("%lf",&insert);
    for (i=1;((4.00000)/(2*(i+1)-1))>=insert;i++){
        if (i%2 == 0){
            result = result - (4.000/((2*i)-1));
        }
        else {
            result = result + (4.000/((2*i)-1));
        }
    }
    printf("The result is: %lf\n",result);
    printf("----------------------END----------------------");
}
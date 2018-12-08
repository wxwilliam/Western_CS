/**This program is a simple calculator.
 * @Name:Xiaowei Wu
 * @Student#: 250998870
 * @Date 2018-10-30
 */
#include <stdio.h>
#include <stdlib.h>
/**
 * The program will ask the user to input  an arithmetic expression.
 * It will calculate with two function and print the calculation result
 * of the atithmetic expression.
 */
float get_num();
char get_op();
float m_exp(float sub_exp, char op);
float s_exp(float sub_exp, char op);
int main() {
    int bool = 0;
    char skip;
    char quit;
    printf("--------------------Simple Calculator--------------------\n");
    while (bool == 0){
        printf("Please enter the arithmetic expression:\n");
        float f;
        char ch;
        float result;
        f = get_num();
        ch = get_op();
        result = 0;
        if (ch == '+' || ch == '-') {
            result = s_exp(f, ch);
        } else if (ch == '*' || ch == '/') {
            char op;
            float num;
            op = get_op();
            num = m_exp(f, ch);
            result = s_exp(num, op);
        }
        printf("%f", result);
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
 * The function will scan the next float element in the studin.
 * @return It will return the scan result.
 */
float get_num(){
    float i;
    scanf("%f",&i);
    return i;
}
/**
 * The function will scan the next character element in the studin.
 * @return It will return the scan result.
 */
char get_op(){
    char i;
    scanf("%c",&i);
    return i;
}
/**
 * The function is use to calculate te * and / in the arithmetic expression.
 * It will use recursion function to calculate the input.
 * The function will push back the + and - and \n to the studin for function s_exp to calculate.
 * @param sub_exp It is the integer that been scan from the studin.
 * @param op It is the character that been scan from the studin.
 * @return It will return the result of the calculation.
 */
float m_exp(float sub_exp, char op) {
    float sub_f;
    char sub_op;
    if (op == '+'||op == '-'||op =='\n'){
        ungetc(op,stdin);
        return sub_exp;

    }
    else {
        sub_f = get_num();
        sub_op = get_op();
        if (op == '*'){
            sub_f = sub_exp * sub_f;
        }
        else {
            sub_f = sub_exp / sub_f;
        }
        return m_exp(sub_f,sub_op);
    }
}
/**
 * The function is use to calculate te + and / - in the arithmetic expression.
 * It will use recursion function to calculate the input.
 * @param sub_exp It is the integer that been scan from the studin.
 * @param op It is the character that been scan from the studin.
 * @return It will return the result of the calculation.
 */
float s_exp(float sub_exp, char op) {
    float sub_f;
    char sub_op;
    if (op == '*'||op == '/'||op =='\n'){
        return  sub_exp;
    }
    else {
        char s_op;
        float s_num;
        s_op = get_op();
        s_num = get_num();
        sub_f = m_exp(s_num,s_op);
        sub_op = get_op();
        if (op == '+'){
            sub_f = sub_exp + sub_f;
        }
        else {
            sub_f = sub_exp - sub_f;
        }
        return s_exp(sub_f,sub_op);
    }

}


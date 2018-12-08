/**This program is a converter.
 * @Name:Xiaowei Wu
 * @Student#: 250998870
 * @Date 2018-10-04
 */
#include <stdio.h>
/**
 * The program will ask user to choose the number type to convert.
 * User can enter a character from 1-5 to choose the type to convert Kilometer to Mile, Meter and Feet
 * Centimetre and Inch and Celsius and Fahrenheit. Then user can enter the first capital letter
 * of the type to choose to convert from which to which. The program will return the answer automatically.
 * @return
 */
int main(){
    char input;
    char char_input;
    double value_input;
    int quit = 0;
    int end_point = 0;
    printf("------------------------Converter------------------------\n");
    while(quit == 0) {
        end_point = 0;
        printf("Enter a character\n");
        printf("1 for conversion between Kilometer and Mile\n");
        printf("2 for conversion between Meter and Feet\n");
        printf("3 for conversion between Centimetre and Inch\n");
        printf("4 for conversion between Celsius and Fahrenheit\n");
        printf("5 for quit\n");
        scanf(" %c",&input);
        switch (input) {
            case '1':
                while (end_point == 0) {
                    printf("Enter K to convert Kilometer to Mile, M to convert Mile to Kilometer\n");
                    scanf(" %c", &char_input);
                    switch (char_input) {
                        case 'K':
                            end_point = 1;
                            printf("Enter the value:\n");
                            scanf(" %lf", &value_input);
                            printf("The value is %.2lf\n", value_input * 0.62137);
                            break;
                        case 'M':
                            end_point = 1;
                            printf("Enter the value:\n");
                            scanf(" %lf", &value_input);
                            printf("The value is %.2lf\n", value_input * 1.609);
                            break;
                        default:
                            printf("Invalid input, please try again.\n");
                    }
                }
                break;
            case '2':
                while (end_point == 0) {
                    printf("Enter M to convert Meter to Feet, F to convert feet to Meter\n");
                    scanf(" %c", &char_input);
                    switch (char_input) {
                        case 'M':
                            end_point = 1;
                            printf("Enter the value:\n");
                            scanf(" %lf", &value_input);
                            printf("The value is %.2lf\n", value_input * 3.28);
                            break;
                        case 'F':
                            end_point = 1;
                            printf("Enter the value\n");
                            scanf(" %lf", &value_input);
                            printf("The value is %.2lf\n", value_input * 0.30);
                            break;
                        default:
                            printf("Invalid input, please try again.\n");
                    }
                }
                break;
            case '3':
                while (end_point == 0) {
                    printf("Enter C to convert Centimetre to Inch, I to convert Inch to Centimetre\n");
                    scanf(" %c", &char_input);
                    switch (char_input) {
                        case 'C':
                            end_point = 1;
                            printf("Enter the value:\n");
                            scanf(" %lf", &value_input);
                            printf("The value is %.2lf\n", value_input * 0.39);
                            break;
                        case 'I':
                            end_point = 1;
                            printf("Enter the value");
                            scanf("%lf", &value_input);
                            printf("The value is %.2lf\n", value_input * 2.54);
                            break;
                        default:
                            printf("Invalid input, please try again.\n");
                    }
                }
                break;
            case '4':
                while (end_point == 0) {
                    printf("Enter C to convert Celsius to Fahrenheit, F to convert Fahrenheit to Celsius\n");
                    scanf(" %c", &char_input);
                    switch (char_input) {
                        case 'C':
                            end_point = 1;
                            printf("Enter the value:\n");
                            scanf(" %lf", &value_input);
                            printf("The value is %.2lf\n", (value_input * 1.8) + 32);
                            break;
                        case 'F':
                            end_point = 1;
                            printf("Enter the value\n");
                            scanf(" %lf", &value_input);
                            printf("The value is %.2lf\n", (value_input - 32) / 1.8);
                            break;
                        default:
                            printf("Invalid input, please try again.\n");
                    }
                }
                break;
            case '5':
                printf("Thank your for using the converter!\n");
                quit = 1;
                break;
            default:
                printf("Invalid input, please try again.\n");
        }
    }
}


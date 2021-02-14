#include <stdio.h>
#include <stdlib.h>
#include "calculator.h"

int main()
{
    int option = 0;
    int result = 0;
    int result_ptr = &result;
    int number1, 
        number2;

    do
    {
        void print_header();

        printf("Pick an option: \n");
        printf("1 - Sum \n");
        printf("2 - Subtraction \n");
        printf("3 - Multiplication \n");
        printf("4 - Division \n");
        printf("5 - Quit \n\n");

        scanf(" %d", &option);
        fflush(stdin);

        // system("cls");

        if (option == 5)
        {
            printf("Bye! :) \n");
            system("pause");
            return 0;
        }

        printf("\n");

        printf("Type the first value: \n");
        scanf(" %d", &number1);

        printf("Type the second value: \n");
        scanf(" %d", &number2);

        fflush(stdin);

        printf("\n");

        switch(option) 
        {
            case 1:
                result = sum(number1, number2);
                printf("Result is: %d \n", result);
                system("pause");
                break;

            case 2:
                result = sub(number1, number2);
                printf("Result is: %d \n", result);
                system("pause");
                break;

            case 3:
                result = multi(number1, number2);
                printf("Result is: %d \n", result);
                system("pause");
                break;

            case 4:
                result = division(number1, number2);
                printf("Result is: %d \n", result);
                system("pause");
                break;

            default:
                break;
        }

        printf("\n");

    } while (option != 5);


    return 0;

    
}
#include <stdio.h>
#include <stdlib.h>
#include "sum.h"
#include "sub.h"
#include "multiplication.h"
#include "division.h"

// Prototypes
void print_header(void);

int main()
{
    int option = 0;
    int result;
    int number1, number2;

    do
    {
        print_header();

        printf("Pick an option: \n");
        printf("1 - Sum \n");
        printf("2 - Subtraction \n");
        printf("3 - Multiplication \n");
        printf("4 - Division \n");
        printf("5 - Quit \n\n");

        scanf(" %d", &option);
        fflush(stdin);

        system("cls");

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
                printf("Result is: %d \n", sum(number1, number2));
                system("pause");
                break;

            case 2:
                printf("Result is: %d \n", sub(number1, number2));
                system("pause");
                break;

            case 3:
                printf("Result is: %d \n", multi(number1, number2));
                system("pause");
                break;

            case 4:
                printf("Result is: %d \n", division(number1, number2));
                system("pause");
                break;

            default:
                break;
        }

        printf("\n");

    } while (option != 5);


    return 0;

    
}

void print_header(void)
{
    system("cls");
    printf("**********************************\n");
    printf("*********** CALCULATOR ***********\n");
    printf("**********************************\n");
    return;
}



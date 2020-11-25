#include <stdio.h>
#include <stdlib.h>
#include "sum.h"
#include "sub.h"
#include "multiplication.h"
#include "division.h"


// Prototypes
void print_header(void);
int print_options(void);

int main()
{
    int selected_option;

    print_header();
    selected_option = print_options();

    printf("The answer is: %d", selected_option);

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

int print_options(void)
{
	int option;
	int number1, number2, result;

	printf("Pick an option: \n");
    printf("1 - Sum \n");
    printf("2 - Subtraction \n");
    printf("3 - Multiplication \n");
    printf("4 - Division \n");

    scanf("%d", &option);
    fflush(stdin);

    if (option == 1){

    	printf("Type the first value: \n");
    	scanf("%d", &number1);

    	printf("Type the second value: \n");
    	scanf("%d", &number2);

        fflush(stdin);
        
        return sum(number1, number2);
    }

    if (option == 2){
    	printf("Type the first value: \n");
    	scanf("%d", &number1);
    	printf("Type the second value: \n");
    	scanf("%d", &number2);

        fflush(stdin);
        
        return sub(number1, number2);
    }

    if (option == 3){
    	printf("Type the first value: \n");
    	scanf("%d", &number1);
    	printf("Type the second value: \n");
    	scanf("%d", &number2);

        fflush(stdin);
        
        return multi(number1, number2);
    }

    if (option == 4){
    	printf("Type the first value: \n");
    	scanf("%d", &number1);
    	printf("Type the second value: \n");
    	scanf("%d", &number2);

        fflush(stdin);
        
        return division(number1, number2);
    }

    return result;
}



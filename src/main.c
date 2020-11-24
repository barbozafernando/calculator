#include <stdio.h>
#include <stdlib.h>

// Prototypes
void print_header(void);
int print_options(void);
int sum(int value1, int value2);


int main()
{
    int a;

    print_header();
    a = print_options();

    printf("ANSWER: %d", a);

    return 0;
}

void print_header(void)
{
    printf("\n**********************************\n");
    printf("\n*********** CALCULATOR ***********\n");
    printf("\n**********************************\n");
    return;
}

int print_options(void)
{
	int option;
	int number1, number2, result;

	printf("Pick an option: \n");
    printf("1 - Sum \n");
    printf("2 - Sub \n");
    printf("3 - Mult \n");
    printf("4 - Div \n");
    scanf("%d", &option);

    if (option == 1){
    	printf("Type the first value: \n");
    	scanf("%d", &number1);
    	printf("Type the second value: \n");
    	scanf("%d", &number2);

    	result = sum(number1, number2);

        return result;
    }

    return result;
}

int sum(int value1, int value2)
{
	return value1 + value2;
}

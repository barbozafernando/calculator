#include <stdio.h>
#include <stdlib.h>

// Prototypes
void print_header(void);


int main()
{
    print_header();

    printf("Hi!");


    return 0;
}

void print_header(void)
{
    printf("\n**********************************\n");
    printf("\n*********** CALCULATOR ***********\n");
    printf("\n**********************************\n");
    return;
}

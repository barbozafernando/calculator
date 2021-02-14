/* It performs a sum operation
 * Arguments: For now, two integer parameters
 */
int sum(int value1, int value2)
{
    return value1 + value2;
}

/* It performs a subtraction operation
 * Arguments: For now, two integer parameters
 */
int sub(int value1, int value2)
{
    return value1 - value2;
}

/* It performs a multiplication operation
 * Arguments: For now, two integer parameters
 */
int multi(int value1, int value2)
{
    return value1 * value2;
}

/* It performs a division operation
 * Arguments: For now, two integer parameters
 */
int division(int value1, int value2)
{
    return value1 / value2;
}

/* 
 * Just prints the "header" of the program
 */
void print_header()
{
    system("cls");
    printf("**********************************\n");
    printf("*********** CALCULATOR ***********\n");
    printf("**********************************\n");
}
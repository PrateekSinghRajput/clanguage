#include<stdio.h>

extern int num1;
extern int num2;


// definition of functions
static void fun(void)
{
    num1 = 30;
    printf("num1 = %d\n", num1);
    num2 = 40;
    printf("num2 = %d\n", num2);
}

int accept_number(void)
{
    int num;
    printf("Enter number : ");
    scanf("%d", &num);
    return num;
}
int factorial(int num)
{
    int i, fact = 1;
    for(i = 1 ; i <= num ; i++)
        fact *= i;
    return fact;
}
void print_result(int res)
{
    printf("factorial = %d\n", res);
}
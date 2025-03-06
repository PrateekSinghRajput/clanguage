#include<stdio.h>
#include"fun.h"

int num1;
static int num2;

// main function - entry point function
int main(void)
{
    int num;

    num = accept_number();

    print_result(factorial(num));

    num1 = 20;
    printf("num1 = %d\n", num1);

    num2 = 30;
    printf("num2 = %d\n", num2);

    // fact = factorial(num);
    // print_result(fact);

    return 0;
}
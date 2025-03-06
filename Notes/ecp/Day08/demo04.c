#include<stdio.h>

// Global variable
int num1 = 10;
//int num3 = num1;          // not allowed
// we can not initialize global variables by any other variable
int num3;

// num3 = num1;     // not allowed

void print(void)
{
    printf("num1 = %d\n", num1);
    printf("num3 =%d\n", num3);
}

int main(void)
{
    // local variable
    int num2;

    printf("num1 = %d\n", num1);        // 0;

    num1 = num2;

    return 0;
}
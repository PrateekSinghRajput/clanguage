#include<stdio.h>

int main(void)
{
    int const num = 10;
    // num is variable of const int
    const int num1 = 20;

    int const *ptr;

    ptr = &num;

    printf("num - *ptr = %d\n", *ptr);

    // num = 100;       // not allowed
    // *ptr = 100;      // not allowed

    ptr = &num1;        // allowed

    printf("num1 - *ptr = %d\n", *ptr);

    return 0;
}
#include<stdio.h>

int main(void)
{
    const int num = 10;
    int num1 = 10;

    int * const ptr = &num;
    // ptr is a const pointer to int
    int * const ptr1 = &num1;
    // ptr1 is a const pointer to int
   

    //ptr = &num;       // not allowed
    // because here ptr is constant

    printf("*ptr = %d\n", *ptr);

    *ptr = 100;

    printf("num = %d\n", num);

    printf("*ptr = %d\n", *ptr1);

    *ptr1 = 100;

    printf("num = %d\n", num1);

    return 0;
}
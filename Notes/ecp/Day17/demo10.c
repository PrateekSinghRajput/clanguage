#include<stdio.h>

int add(int, int);
int sub(int, int);
int mul(int, int);

int main(void)
{
    int (*ptr)(int, int) = NULL;

    ptr = add;
    printf("sum = %d\n", ptr(10,20));

    ptr = sub;
    printf("diff = %d\n", ptr(20, 10));

    ptr = mul;
    printf("Product = %d\n", ptr(10, 20));

    return 0;
}

int add(int num1, int num2)
{
    return num1 + num2;
}
int sub(int num1, int num2)
{
    return num1 - num2;
}
int mul(int num1, int num2)
{
    return num1 * num2;
}
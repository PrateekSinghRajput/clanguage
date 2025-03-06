#include<stdio.h>

int add(int, int);
int sub(int, int);
int mul(int, int);

int main(void)
{
    int (*ptr[3])(int, int) = {add, sub, mul};

    //ptr[0] = add;
    //ptr[1] = sub;
    //ptr[2] = mul;

    printf("sum = %d\n", ptr[0](10,20));
    printf("diff = %d\n", ptr[1](20, 10));
    printf("Product = %d\n", ptr[2](10, 20));

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
#include<stdio.h>

void print_res(int res)
{
    printf("res = %d\n", res);
}

void add(int num1, int num2)
{
    int res = num1 + num2;
    print_res(res); 
}

int main(void)
{
    int num1, num2;
    printf("Enter num1 and num2 : ");
    scanf("%d %d", &num1, &num2);

    add(num1, num2);
    printf("After add function\n");
    return 0;
}
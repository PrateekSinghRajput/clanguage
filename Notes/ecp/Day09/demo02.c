#include<stdio.h>

// swap two variables using function

void swap(int, int);



int main(void)
{
    int num1, num2;

    printf("Enter two numbers : ");
    scanf("%d %d", &num1, &num2);

    printf("main :: Before swap :: num1 = %d, num2 = %d\n", num1, num2);
    swap(num1, num2);
    printf("main :: After swap :: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

void swap(int n1, int n2)
{
    printf("swap :: before swap :: n1 = %d, n2 = %d\n", n1, n2);
    int temp = n1;
    n1 = n2;
    n2 = temp;
    printf("swap :: after swap :: n1 = %d, n2 = %d\n", n1, n2);
}
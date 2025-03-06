#include<stdio.h>

// Write a program to find factorial of given number using recursion.

// 5! = 5 * 4!
//    = 5 * 4 * 3!
//    = 5 * 4 * 3 * 2!
//    = 5 * 4 * 3 * 2 * 1!
//    = 5 * 4 * 3 * 2 * 1

// formula ---> n! = n * (n-1)!
// terminating condition ---> num == 1


int factorial(int);
int factorial_rec(int);

int main(void)
{
    int num;

    printf("Enter number : ");
    scanf("%d", &num);

    //printf("factorial of %d = %d\n", num, factorial(num));
    if(num > 0)
        printf("factorial of %d = %d\n", num, factorial_rec(num));

    return 0;
}

int factorial(int num)
{
    int i;
    int fact = 1;

    for(i = 1 ; i <= num ; i++)
        fact *= i;

    return fact;
}

int factorial_rec(int num)
{
    int fact;
    if(num == 1)
        return 1;
    fact = num * factorial_rec(num-1);
    return fact;
}
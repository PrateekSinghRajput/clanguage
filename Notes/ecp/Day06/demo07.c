#include<stdio.h>

// Write a function to print given number

// declaration
void print_number(int);
// in declaration writing name of arguments is optional

int main(void)
{
    int num;

    printf("Enter number : ");
    scanf("%d", &num);

    // function call
    print_number(num);
    // in function call - writing variable data types is not allowed
    // arguments passed to the function while calling are called as actual arguments/ variables
    // when you do any function call, all actual arguments are copied inside all formal arguments

    return 0;
}

// definition
// writing names of arguments is compulsory
// arguments used in definition are called as formal arguments/ variables
void print_number(int n)  
{
    printf("value = %d\n", n);
}
#include<stdio.h>

//  function to take number from user
int accept_number(void);

//  function to print result on console
void print_result(int);

//  function to add two numbers
int add_numbers(int, int);


// main() - calling function
// accept_number(), add_numbers(), print_result() - called functions

int main(void)
{
    int res, num1, num2;
      

    num1 = accept_number();
    num2 = accept_number();

    res = add_numbers(num1, num2);

    print_result(res);

    return 0;
}

int accept_number(void)
{
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    return n;
    // if you want to return from any function or if you want to return any value from function
    // then you should use "return" keyword
}

void print_result(int result)
{
    printf("result = %d\n", result);
}


int add_numbers(int n1, int n2)
{
    int res = n1 + n2;
    return res;
}
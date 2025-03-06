#include<stdio.h>
// pascal
void function(int num1, int num2, int num3)
{
    printf("%d %d %d", num1, num2, num3);
}// pop(num3)
// pop(num2)
// pop(num1)


int main(void)
{
    int num1 = 10, num2 = 20, num3 = 30;

    function(num1, num2, num3);
    // push(num1)
    // push(num2)
    // push(num3)
    // call

    return 0;
}
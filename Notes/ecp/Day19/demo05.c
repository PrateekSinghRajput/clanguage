#include<stdio.h>
// cdecl

void  __attribute__((cdecl)) fun(int num1, int num2, int num3)
{
    printf("%d %d %d", num1, num2, num3);
    // push(num3)
    // push(num2)
    // push(num1)
    // push("...")
    // call
    // pop("...")
    // pop(num1)
    // pop(num2)
    // pop(num3)
}


int main(void)
{
    int num1 = 10, num2 = 20, num3 = 30;

    fun(num1, num2, num3);
    // push(num3)
    // push(num2)
    // push(num1)
    // call
    // pop(num1)
    // pop(num2)
    // pop(num3)
    return 0;
}
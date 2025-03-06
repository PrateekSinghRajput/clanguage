#include<stdio.h>
#include<string.h>

int main(void)
{
    const int num = 10;

    const int * const ptr =  &num;
    // ptr is a const pointer to int const

    //*ptr = ?      // not allowed
    // location pointed ny ptr is constant

    //ptr = ?
    // ptr itslef is a constant


    printf("*ptr = %d\n", *ptr);

   

    return 0;
}
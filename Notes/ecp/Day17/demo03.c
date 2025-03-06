#include<stdio.h>

// const - it makes your memory location non modifiable

int main(void)
{
    const int num = 10;
    // num is int constant variable

    //num = 10;
    // it is not allowed to assign value after declaration to const variable

    int *ptr = &num;
    // ptr is a pointer to int
    
    printf("*ptr = %d\n", *ptr);

    *ptr = 100;
    // it is allowed to modify value of const variable using pointer to that variable
    
    printf("num = %d\n", num);

    return 0;
}
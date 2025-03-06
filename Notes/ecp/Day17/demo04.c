#include<stdio.h>

// const - it makes your memory location non modifiable

int main(void)
{
    const int num = 10;
    // num is int constant variable

    const int *ptr = &num;
    // ptr is a pointer to const int
    
    printf("*ptr = %d\n", *ptr);

    //*ptr = 100;
    // it is not allowed to modify value of const variable using pointer to constant variable
    
    printf("num = %d\n", num);

    return 0;
}
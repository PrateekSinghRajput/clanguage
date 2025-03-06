#include<stdio.h>

// const - it makes your memory location non modifiable

int main(void)
{
    const int num = 10;
    // num is int constant variable
    
    printf("num = %d\n", num);

    //num = 100;       
    // not allowed to modify because it is a constant variable

    printf("num = %d\n", num);

    return 0;
}
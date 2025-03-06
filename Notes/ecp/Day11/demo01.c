#include<stdio.h>

int main(void)
{
    int num = 10;

    int *ptr = &num;

    printf("ptr = %u, *ptr = %d, num = %d\n", ptr, *ptr, num);
    //printf("*ptr++ = %d\n", *ptr++);        // *ptr, ptr++
    printf("*++ptr = %d\n", *++ptr);        // ++ptr, *ptr
    printf("*(ptr++) = %d\n", *ptr++);        // 

    printf("ptr = %u, num = %d\n", ptr, num);


    return 0;
}
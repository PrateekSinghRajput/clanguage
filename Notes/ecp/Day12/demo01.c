#include<stdio.h>

int main(void)
{
    int num = 10;

    int *ptr = &num;

    printf("num = %d, ptr = %u\n", num, ptr);
    //printf("*ptr++ = %d\n", *ptr++);
    printf("*++ptr = %d\n", *++ptr);
    printf("num = %d, ptr = %u\n", num, ptr);

    return 0;
}
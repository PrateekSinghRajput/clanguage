#include<stdio.h>
#include<limits.h>

int main(void)
{
    unsigned char var = 257;
    char var1 = 129;

    // 0, 1, 2, ........ 252, 253, 254, 255
    // -128, -127, -126 ------0----- 125, 126, 127


    printf("Range of signed char :: %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("Range of unsigned char :: %d to %d\n", 0, UCHAR_MAX);

    printf("var = %d\n", var);
    printf("var1 = %d\n", var1);

    return 0;
}
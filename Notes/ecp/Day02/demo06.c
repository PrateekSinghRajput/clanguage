#include<stdio.h>

int main(void)
{
    //int num = 20;     // decimal number
    //int num = 0x20;   // hexa decimal number
    int num = 020;      // octal number

    printf("decimal :: num = %d\n", num);
    printf("Hexa decimal :: num = %x\n", num);
    printf("Octal :: num = %o\n", num);
    return 0;
}
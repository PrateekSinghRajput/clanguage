#include<stdio.h>
#include<limits.h>

int main(void)
{
    printf("-------------------------------------------------------\n");
    printf("%-20s %-20s %-5s %-10s %-10s\n", "Data type", "Format Specifier", "Size", "Lower Range", "Upper Range");
    printf("-------------------------------------------------------\n");
    printf("%-20s %-20s %-5d %-10d %-10d\n", "signed char", "%c", sizeof(char), CHAR_MIN, CHAR_MAX);
    printf("%-20s %-20s %-5d %-10d %-10d\n", "unsigned char", "%c", sizeof(unsigned char), 0, UCHAR_MAX);
    printf("-------------------------------------------------------\n");
    return 0;
}
#include<stdio.h>

int main(void)
{
    int num = 0x00000041;

    char *ptr = (char *)&num;

    if(*ptr == 0x41)
        printf("Little Endian\n");
    else
        printf("Big Endian\n");

    for(int i = 0 ; i < 4 ; i++, ptr++)
        printf("%dth byte = %d [%u]\n", i, *ptr, ptr);

    return 0;
}
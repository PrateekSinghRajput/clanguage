#include<stdio.h>

int main(void)
{
    int num;
    printf("Range of Upper Case letters : %d to %d\n", 'A', 'Z');
    printf("Range of Lower Case letters : %d to %d\n", 'a','z');

    printf("Range of Digits : %d to %d\n", '0', '9');

    printf("sizeof(int) : %d\n", sizeof(int));
    printf("sizeof(num) : %d\n", sizeof(num));

    printf("sizeof(66) : %d\n", sizeof(66));

    printf("sizeof(10 + 20) : %d\n", sizeof(10 + 20));


    return 0;
}
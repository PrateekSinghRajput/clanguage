#include <stdio.h>

int main() {
    unsigned int num1 = 5;
    signed int num2 = 5;
    int result;
    result = num1 >> 1;
    printf("(unsigned) %d >> 1 = %d\n", num1, result);
    result = num1 >> 2;
    printf("(unsigned) %d >> 2 = %d\n", num1, result);

    result = num2 >> 1;
    printf("(signed +ve) %d >> 1 = %d\n", num2, result);
    result = num2 >> 2;
    printf("(signed +ve) %d >> 2 = %d\n", num2, result);

    num2 = -5;
    result = num2 >> 1;
    printf("(signed +ve) %d >> 1 = %d\n", num2, result);
    result = num2 >> 2;
    printf("(signed +ve) %d >> 2 = %d\n", num2, result);

    num1 = -5;          // 2$32 - 5 = 4294967291
    result = num1 >> 1; // 4294967291 / 2 = 2147483645
    printf("(unsigned) %u >> 1 = %d\n", num1, result);

    num2 = -5;
    result = (unsigned)num2 >> 1;
    printf("(unsigned) %d >> 1 = %d\n", num2, result);

    num2 = -5;
    result = num2 >> 4;
    printf("(signed -ve) %d >> 1 = %d\n", num2, result);

    num2 = -1;
    result = num2 >> 4;
    printf("(signed -ve) %d >> 1 = %d %x\n", num2, result, result);
    return 0;
}
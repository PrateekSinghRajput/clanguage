#include <stdio.h>

int main() {
    short num1 = 5, num2 = 9, result;
    result = num1 & num2;
    printf("%hd & %hd = %hd\n", num1, num2, result);
    result = num1 | num2;
    printf("%hd | %hd = %hd\n", num1, num2, result);
    result = num1 ^ num2;
    printf("%hd ^ %hd = %hd\n", num1, num2, result);
    result = ~num1;
    printf("~%hd = %hd, %hu\n", num1, result, result);
    return 0;
}

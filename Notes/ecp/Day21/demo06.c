#include <stdio.h>

int main() {
    int num = 5;
    int result;
    result = num << 1;
    printf("%d << 1 = %d\n", num, result);
    result = num << 2;
    printf("%d << 2 = %d\n", num, result);
    result = num << 5;
    printf("%d << 5 = %d\n", num, result);
    num = -5;
    result = num << 2;
    printf("%d << 2 = %d\n", num, result);
    return 0;
}
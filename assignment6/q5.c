#include <stdio.h>

int main() {
    int intVar = 10;
    float floatVar = 5.5;

    void *ptr;

    ptr = &intVar;
    printf("Value of intVar: %d\n", *((int*)ptr));

    ptr = &floatVar;
    printf("Value of floatVar: %.2f\n", *((float*)ptr));

    return 0;
}

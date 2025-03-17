#include <stdio.h>

void test() {
    register int regVar = 10;
    int normalVar = 20;

    printf("regVar: %d, normalVar: %d\n", regVar, normalVar);
}

int main() {
    test();
    return 0;
}

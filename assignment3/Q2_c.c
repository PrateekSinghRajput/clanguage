#include <stdio.h>

void swap_no_temp(int a, int b, int count) {
    if (count == 0) return; 
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping: a = %d, b = %d\n", a, b);
}

int main() {
    int x = 5, y = 10;
    printf("Before swapping: x = %d, y = %d\n", x, y);
    swap_no_temp(x, y, 1);
    return 0;
}

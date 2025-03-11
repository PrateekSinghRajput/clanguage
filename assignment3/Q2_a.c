#include <stdio.h>

void swap_temp(int a, int b, int count) {
    if (count == 0) return; 
    int temp = a;
    a = b;
    b = temp;
    printf("After swapping: a = %d, b = %d\n", a, b);
}

int main() {
    int x = 5, y = 10;
    printf("Before swapping: x = %d, y = %d\n", x, y);
    swap_temp(x, y, 1);
    return 0;
}

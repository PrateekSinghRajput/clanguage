#include <stdio.h>

int main() {
    int a = 10, b = 20;
    void *ptr1 = &a;
    void *ptr2 = &b;
    
    int sum = *(int *)ptr1 + *(int *)ptr2;
    int diff = *(int *)ptr1 - *(int *)ptr2;
    int prod = *(int *)ptr1 * *(int *)ptr2;
    int quot = *(int *)ptr1 / *(int *)ptr2;
    
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("Product: %d\n", prod);
    printf("Quotient: %d\n", quot);
    
    return 0;
}

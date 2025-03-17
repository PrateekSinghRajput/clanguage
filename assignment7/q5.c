#include <stdio.h>

void sumAndProduct(int a, int b, int *sum, int *product) {
    *sum = a + b;
    *product = a * b;
}

int main() {
    int num1 = 5, num2 = 3;
    int sum, product;

    sumAndProduct(num1, num2, &sum, &product);

    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);

    return 0;
}

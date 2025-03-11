#include <stdio.h>

int findLargest(int a, int b, int c) {
    return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
}

int main() {
    int num1, num2, num3;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("The largest number is: %d\n", findLargest(num1, num2, num3));
    
    return 0;
}

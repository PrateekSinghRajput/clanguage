#include <stdio.h>

int sum(int n) {
    if (n == 0)
        return 0;
    int num;
    printf("Enter number %d: ", n);
    scanf("%d", &num);
    return num + sum(n - 1);
}

int main() {
    int n;
    printf("Enter how many numbers you want to sum: ");
    scanf("%d", &n);
    
    int result = sum(n);
    printf("Sum of %d numbers is: %d\n", n, result);
    
    return 0;
}

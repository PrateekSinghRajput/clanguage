#include <stdio.h>

int main() {
    int limit;

    printf("Enter the limit up to which you want to print prime numbers: ");
    scanf("%d", &limit);

    printf("Prime numbers up to %d are:\n", limit);

    for (int num = 2; num <= limit; num++) {
        int is_prime = 1; 

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                is_prime = 0; 
                break; 
            }
        }
        if (is_prime) {
            printf("%d ", num);
        }
    }
    printf("\n");

    return 0;
}
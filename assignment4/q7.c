#include <stdio.h>

void decimalToBinary(int n) {
    if (n > 1)
        decimalToBinary(n / 2);
    printf("%d", n % 2);
}

void decimalToOctal(int n) {
    if (n > 7)
        decimalToOctal(n / 8);
    printf("%d", n % 8);
}

int binaryToDecimal(int n) {
    if (n == 0)
        return 0;
    return (n % 10) + 2 * binaryToDecimal(n / 10);
}

int octalToDecimal(int n) {
    if (n == 0)
        return 0;
    return (n % 10) + 8 * octalToDecimal(n / 10);
}

int main() {
    int choice, num;
    printf("Choose conversion:\n");
    printf("1. Decimal to Binary\n");
    printf("2. Decimal to Octal\n");
    printf("3. Binary to Decimal\n");
    printf("4. Octal to Decimal\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter number: ");
    scanf("%d", &num);

    switch (choice) {
        case 1:
            printf("Binary: ");
            decimalToBinary(num);
            printf("\n");
            break;
        case 2:
            printf("Octal: ");
            decimalToOctal(num);
            printf("\n");
            break;
        case 3:
            printf("Decimal: %d\n", binaryToDecimal(num));
            break;
        case 4:
            printf("Decimal: %d\n", octalToDecimal(num));
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}

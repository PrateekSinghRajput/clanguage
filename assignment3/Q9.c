#include <stdio.h>

void decimalToBinary(int n) {
    if (n == 0) return; 
    decimalToBinary(n / 2); 
    printf("%d", n % 2); 
}

void decimalToOctal(int n) {
    if (n == 0) return; 
    decimalToOctal(n / 8); 
    printf("%d", n % 8); 
}

void decimalToHexadecimal(int n) {
    if (n == 0) return; 
    decimalToHexadecimal(n / 16); 
    int remainder = n % 16;
    if (remainder < 10)
        printf("%d", remainder); 
    else
        printf("%c", 'A' + remainder - 10); 
}

int main() {
    int num;
    

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary: 0\n");
        printf("Octal: 0\n");
        printf("Hexadecimal: 0\n");
        return 0;
    }

    printf("Binary: ");
    decimalToBinary(num);
    printf("\n");

    printf("Octal: ");
    decimalToOctal(num);
    printf("\n");

    printf("Hexadecimal: ");
    decimalToHexadecimal(num);
    printf("\n");

    return 0;
}

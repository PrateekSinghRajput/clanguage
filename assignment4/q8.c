#include <stdio.h>

int countOccurrences(char binary[], int index, char target) {
    if (binary[index] == '\0') {
        return 0;
    }
    return (binary[index] == target) + countOccurrences(binary, index + 1, target);
}

int main() {
    char binary[100];
    char choice;
    
    printf("Enter a binary string: ");
    scanf("%s", binary);
    
    printf("Enter the character to count (0 or 1): ");
    scanf(" %c", &choice);
    
    if (choice != '0' && choice != '1') {
        printf("Invalid input! Please enter 0 or 1.\n");
        return 1;
    }
    
    int count = countOccurrences(binary, 0, choice);
    printf("The number of '%c' in the binary string is: %d\n", choice, count);
    
    return 0;
}

#include <stdio.h>

int binomialCoeff(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    }
    return binomialCoeff(n - 1, k - 1) + binomialCoeff(n - 1, k);
}

void printPascalsTriangle(int rows) {
    for (int i = 0; i < rows; i++) {

        for (int j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }
    
        for (int j = 0; j <= i; j++) {
            printf("%d ", binomialCoeff(i, j));
        }
        printf("\n");
    }
}

int main() {
    int rows;
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);
    printPascalsTriangle(rows);
    return 0;
}
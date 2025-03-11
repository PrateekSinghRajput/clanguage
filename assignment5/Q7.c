#include <stdio.h>

#define SIZE 3 

void inputMatrix(int matrix[SIZE][SIZE]) {
    printf("Enter elements for the %dx%d matrix:\n", SIZE, SIZE);
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void transposeMatrix(int matrix[SIZE][SIZE], int transposed[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            transposed[j][i] = matrix[i][j]; 
        }
    }
}

int main() {
    int matrix[SIZE][SIZE], transposed[SIZE][SIZE];

    inputMatrix(matrix);

    transposeMatrix(matrix, transposed);

    printf("\nOriginal Matrix:\n");
    printMatrix(matrix);
    printf("\nTransposed Matrix:\n");
    printMatrix(transposed);

    return 0;
}

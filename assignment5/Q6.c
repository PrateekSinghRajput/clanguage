#include <stdio.h>

#define SIZE 3 

void inputMatrix(int matrix[SIZE][SIZE], char name) {
    printf("Enter elements for Matrix %c (%dx%d):\n", name, SIZE, SIZE);
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


void addMatrices(int A[SIZE][SIZE], int B[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}


void subtractMatrices(int A[SIZE][SIZE], int B[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = A[i][j] - B[i][j];
        }
    }
}


void multiplyMatrices(int A[SIZE][SIZE], int B[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = 0; 
            for (int k = 0; k < SIZE; k++) {
                result[i][j] += A[i][k] * B[k][j]; 
            }
        }
    }
}

int main() {
    int A[SIZE][SIZE], B[SIZE][SIZE], result[SIZE][SIZE];

    inputMatrix(A, 'A');
    inputMatrix(B, 'B');

    addMatrices(A, B, result);
    printf("\nMatrix Addition Result:\n");
    printMatrix(result);

    subtractMatrices(A, B, result);
    printf("\nMatrix Subtraction Result:\n");
    printMatrix(result);

    multiplyMatrices(A, B, result);
    printf("\nMatrix Multiplication Result:\n");
    printMatrix(result);

    return 0;
}

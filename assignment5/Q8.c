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

int traceMatrix(int matrix[SIZE][SIZE]) {
    int trace = 0;
    for (int i = 0; i < SIZE; i++) {
        trace += matrix[i][i];
    }
    return trace;
}

int main() {
    int matrix[SIZE][SIZE];

    inputMatrix(matrix);

    int trace = traceMatrix(matrix);

    printf("\nThe Trace of the matrix is: %d\n", trace);

    return 0;
}

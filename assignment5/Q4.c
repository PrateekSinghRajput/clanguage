#include <stdio.h>

#define SIZE 10

void addArrays(int arr1[], int arr2[], int result[], int size) {
    for (int i = 0; i < size; i++) {
        result[i] = arr1[i] + arr2[i];
    }
}

int main() {
    int arr1[SIZE], arr2[SIZE], result[SIZE];

    printf("Enter %d elements for first array:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter %d elements for second array:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &arr2[i]);
    }

    addArrays(arr1, arr2, result, SIZE);

    printf("Resultant array after addition: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}

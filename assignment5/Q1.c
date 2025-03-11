#include <stdio.h>

#define SIZE 10

int findIndex(int arr[], int size, int num) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int arr[SIZE];
    int num, index;

    printf("Enter %d integers:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &num);

    index = findIndex(arr, SIZE, num);

    if (index != -1) {
        printf("Number found at index: %d\n", index);
    } else {
        printf("Number not found in the array.\n");
    }

    return 0;
}

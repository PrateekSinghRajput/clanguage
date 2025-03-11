#include <stdio.h>

#define SIZE 10

int* findElement(int arr[], int size, int num) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            return &arr[i]; 
        }
    }
    return NULL; 
}

int main() {
    int arr[SIZE];
    int num;
    int *address;


    printf("Enter %d integers:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to find its address: ");
    scanf("%d", &num);

    address = findElement(arr, SIZE, num);

    if (address != NULL) {
        printf("Element found at address: %p\n", (void*)address);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}

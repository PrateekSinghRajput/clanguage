#include <stdio.h>

void display(int arr[], int index, int size) {
    if (index == size)
        return;
    printf("%d ", arr[index]);
    display(arr, index + 1, size);
}

void reverse_display(int arr[], int index) {
    if (index < 0)
        return;
    printf("%d ", arr[index]);
    reverse_display(arr, index - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("Array elements: ");
    display(arr, 0, size);
    
    printf("\nReversed array elements: ");
    reverse_display(arr, size - 1);
    
    return 0;
}

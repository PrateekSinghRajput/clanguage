#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};  
    int *ptr = arr;  

    printf("Last element: %d\n", *(ptr + (sizeof(arr) / sizeof(arr[0]) - 1)));

    return 0;
}

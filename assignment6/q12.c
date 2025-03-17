#include <stdio.h>

int main() {
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int (*q)[3][4] = &arr;  // Pointer to the 3x4 array

    printf("Size of q    (pointer itself)      : %lu bytes\n", sizeof(q));
    printf("Size of *q   (3x4 array)           : %lu bytes\n", sizeof(*q));
    printf("Size of **q  (1D array of 4 ints)  : %lu bytes\n", sizeof(**q));
    printf("Size of ***q (single integer)      : %lu bytes\n", sizeof(***q));

    return 0;
}

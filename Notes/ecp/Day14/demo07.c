#include<stdio.h>

int main(void)
{
    int arr[5] = {11, 22, 33, 44, 55};
    //int *ptr = arr;

    int arr1[2][3] = {{11, 22, 33},{44, 55, 66}};
    // ? = arr1;
    // to store base address (address of 0th element) of 2D array,
    // we need pointer variable of type array (array pointer)

    printf("arr = %u\n", arr);
    printf("&arr = %u\n", &arr);

    printf("arr = %u, arr + 1 = %u\n", arr, arr + 1);
    printf("&arr = %u, &arr + 1 = %u\n", &arr, &arr + 1);

    int (*ptr)[5] = &arr;
    // ptr is a pointer '*' variable of collection '()' of 5 '[]' integer values 'int'
    
    printf("ptr = %u, &arr =%u\n", ptr, &arr);

    printf("*ptr = %u\n", *ptr);

    printf("*ptr[0] = %u\n", (*ptr)[0]);    // *((*ptr) + 0) = *((*100) + 0) = *(100 + 0) = 11 
    printf("*ptr[1] = %u\n", (*ptr)[1]);

    return 0;
}

/*
    int *ptr[5];
    // arr of int pointers

    int (*ptr)[5];
    // pointer of collection of 5 int
*/
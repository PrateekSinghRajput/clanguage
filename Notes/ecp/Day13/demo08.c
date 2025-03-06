#include<stdio.h>

int main(void)
{
    // <data type> <name of array>[<size of array>];
    // int arr[5];
    // it is array of 5 integers
    int num1 = 10, num2 = 20, num3 = 30, num4 = 40, num5 = 50;
    int *arr[5] = {&num1, &num2, &num3, &num4, &num5};

    // it is array of 5 intger pointers

    printf("sizeof(arr) = %d\n", sizeof(arr));
    // sizeof(arr) = sizeof(individual element) * number of elements
    //              = sizeof(int *) * 5
    //              = 8 * 5 = 40

    printf("num1 = %d, &num1 = %u, arr[0] = %u, *arr[0] = %d\n", num1, &num1, arr[0], *arr[0]);
    printf("num2 = %d, &num2 = %u, arr[1] = %u, *arr[1] = %d\n", num2, &num2, arr[1], *arr[1]);
    printf("num3 = %d, &num3 = %u, arr[2] = %u, *arr[2] = %d\n", num3, &num3, arr[2], *arr[2]);

    

    return 0;
}
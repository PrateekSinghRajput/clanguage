#include<stdio.h>

int main(void)
{
    double arr[5] = {1.1, 2.2, 3.3, 4.4, 5.5};

    //double *ptr = &arr[0];      // method 1
    double *ptr = arr;

    for(int i = 0 ; i < 5 ; i++)
        printf("arr[%d] = %lf    [%u]\n", i, arr[i], &arr[i]);

    printf("sizeo(arr) = %d\n", sizeof(arr));

    //arr++;      // arr = arr + 1
    // This is not allowed as address of array is fixed thats why we can not modify arr
    
    for(int i = 0 ; i < 5 ; i++)
        printf("ptr[%d] = %lf    [%u]\n", i, ptr[i], &ptr[i]);

    printf("arr = %u, ptr = %u\n", arr, ptr);

    return 0;
}
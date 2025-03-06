#include<stdio.h>

int main(void)
{
    //syntax :: 
    //<data type> <name of array>[<size of array>];

    int arr1[5];
    // arr1 is an array with uninitialized values

    int arr2[5] = {11, 22, 33, 44, 55};
    // arr2 is an array with initialized values

    int arr3[5] = {11, 22, 33};
    // arr3 is an array with partial initilization
    // remaining array elements are initialized with 0 value
    // int arr3[5] = {11, 22, 33, 0 ,0};

    int arr4[] = {11, 22, 33, 44, 55};
    // arr4 is an array with size 5
    // if you are not providing size but you are providing list of values
    // then your array size is inferred(it will calculate count of elements and that much szie is given to the array) 
    
    // int arr5[3] = {11, 22, 33, 44, 55};
    // excess elements in array initializer

    // TO access array elements you need one operator
    // operator --> []      --> subscript operator

    // syntax  --> <name of array>[<index of element>]
    // 0th index element --> arr2[0]
    // 3rd index element --> arr2[3]
    // 3rd element --> arr2[2]

    printf("arr2[0] = %d\n", arr2[0]);
    printf("arr2[1] = %d\n", arr2[1]);
    printf("arr2[2] = %d\n", arr2[2]);
    printf("arr2[3] = %d\n", arr2[3]);
    printf("arr2[4] = %d\n", arr2[4]);

    for(int i = 0 ; i < 5 ; i++)
        printf("%d index element = %d\n", i, arr3[i]);

    arr2[3] = 40;

    printf("Arr2 :: ");
    for(int i = 0 ; i < 5 ; i++)
        printf("%-4d", arr2[i]);
    printf("\n");

    return 0;
}
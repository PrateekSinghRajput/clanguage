#include<stdio.h>
#include<stdlib.h>

//int (*compare)(const void *, const void *)

int compare(const void *p1, const void *p2)
{
    int num1 = *(int *)p1;
    int num2 = *(int *)p2;
    return num1 - num2;
}

int compare1(const void *p1, const void *p2)
{
    float num1 = *(float *)p1;
    float num2 = *(float *)p2;
    return num2 - num1;
}

int main(void)
{
    //int arr[6] = {30, 10, 50, 20, 60, 40};
    float arr[6] = {1.5, 6.5, 4.5, 8.5, 2.5, 3.5};
    // qsort() - it is used to sort any type of data
    // arg1 - void *base - base address of collection (array)
    // arg2 - size_t NoOfElements - number of elements of your collection
    // arg3 - size_t SizeOfElements - sizeof(individual elemenet of your collection)
    // arg4 - CompareFuction - address of compare function

    printf("arr :: ");
    for(int i = 0 ; i < 6 ; i++)
        printf("%.2f ", arr[i]);
    printf("\n");
    
    //qsort(arr, 6, sizeof(int), compare);
    qsort(arr, 6, sizeof(float), compare1);

    printf("arr :: ");
    for(int i = 0 ; i < 6 ; i++)
        printf("%.2f ", arr[i]);
    printf("\n");

    return 0;
}
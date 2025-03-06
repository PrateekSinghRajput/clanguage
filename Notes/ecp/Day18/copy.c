#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//#define SWAP(A, B) {int T = A; A = B; B = T;}

void print_array(char *arr, int n);
// int compare(const void *, const void *);
// int (*funcompare)(const void *, const void *);
void selection_sort(char *arr, int n, int size, int (*funcompare)(const void *, const void *));

int compare(const void *p1, const void *p2)
{
    int num1 = *(int *)p1;
    int num2 = *(int *)p2;
    return num1 - num2;
}

int compare1(const void *p1, const void *p2)
{
    return *(char *)p1 - *(char *)p2;
}

void swap(void *p1, void *p2, int size)
{
    void *temp = malloc(size);
    memcpy(temp, p1, size);
    memcpy(p1, p2, size);
    memcpy(p2, temp, size);
    free(temp);
}

int main(void)
{
    //int arr[6] = { 55, 44, 22, 66, 11, 33 };
    char arr[6] = {'B', 'D', 'A', 'C', 'G', 'E'};
    print_array(arr, 6);
    // qsort(base addr, count, sizeof(ele), comapre);
    //selection_sort(arr, 6, sizeof(int), compare);
    selection_sort(arr, 6, sizeof(char), compare1);
    print_array(arr, 6);
    return 0;
}
void print_array(char *arr, int n)
{
    int i;
    printf("Array : ");
    for(i = 0 ; i < n ; i++)
        printf("%4c", arr[i]);
    printf("\n");
}

void selection_sort(char *arr, int n, int size, int (*funcompare)(const void *, const void *))
{
    int i, j;
    for(i = 0 ; i < n - 1 ; i++)
    {
        for(j = i + 1 ; j < n ; j++)
        {
            // if(arr[i] > arr[j])
            if(funcompare(&arr[i], &arr[j]) > 0)
            {
                swap(&arr[i], &arr[j], size);
            }
        }
    }
}
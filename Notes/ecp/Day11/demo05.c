#include<stdio.h>

void accept_array(int *, int);
void print_array(int *, int);

int main(void)
{
    int arr[5];

    accept_array(arr, 5);
    print_array(arr, 5);

    return 0;
}

// ptr - base address
// ptr[i] - ith element of your array
void accept_array(int *ptr, int size)
{
    for(int i = 0 ; i < size ; i++)
    {
        printf("Enter arr[%d] : ", i);
        scanf("%d", &ptr[i]);
    }
}
void print_array(int *ptr, int size)
{
    printf("arr :: ");
    for(int i = 0 ; i < size ; i++)
        printf("%-4d", ptr[i]);
    printf("\n");
}

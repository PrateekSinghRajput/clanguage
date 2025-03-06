#include<stdio.h>

int main(void)
{
    int arr[5] = {11, 22, 33, 44, 55};

    for(int i = 0 ; i < 5 ; i++)
        printf("arr[%d] = %d\n", i, arr[i]);

    printf("*(arr + 0) = %d\n", *(arr + 0));
    printf("*(arr + 1) = %d\n", *(arr + 1));
    printf("*(arr + 2) = %d\n", *(arr + 2));

    // arr[0] = *(arr + 0)
    // arr[1] = *(arr + 1)
    // arr[2] = *(arr + 2)
    // arr[i] = *(arr + i)

    for(int i = 0 ; i < 5 ; i++)
    {
        printf("Enter arr[%d] : ", i);
        //scanf("%d", &*(arr + i));
        scanf("%d", arr + i);
    }

    // 0th ==> address of 0th ele = 400
    // &*(arr + 0) = &*(400 + 0) = &*(400) = &11 = 400

    for(int i = 0 ; i < 5 ; i++)
        printf("arr[%d] = %d\n", i, *(arr + i));

    return 0;
}
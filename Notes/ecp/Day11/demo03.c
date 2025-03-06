#include<stdio.h>

int main(void)
{
    //int size = 20;
    //float arr[size];
    // above declaration is not allowed

    float arr[5];

    for(int i = 0 ; i < 5 ; i++)
    {
        printf("ENter arr[%d] = ", i);
        scanf("%f", &arr[i]);
    }

    printf("Arr : ");
    for(int i = 0 ; i < 5 ; i++)
        printf("%-5.2f", arr[i]);
    printf("\n");
    printf("Here\n");

    return 0;
}
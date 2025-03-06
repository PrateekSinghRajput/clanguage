#include<stdio.h>

#define PI 3.142
#define SIZE 10

int main(void)
{
    int arr[SIZE];

    printf("PI = %f\n", PI);

    printf("Line number = %d\n", __LINE__);
    printf("File name = %s\n", __FILE__);
    printf("Date = %s\n", __DATE__);
    printf("Time = %s\n", __TIME__);
    
    return 0;
}
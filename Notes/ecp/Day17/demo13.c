#include<stdio.h>

void swap_int(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void swap_float(float *p1, float *p2)
{
    float temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main(void)
{
    //int num1 = 10, num2 = 20;
    float num1 = 10, num2 = 20;

    // printf("before : num1 = %d, num2 = %d\n", num1, num2);
    // swap_int(&num1, &num2);
    // printf("after : num1 = %d, num2 = %d\n", num1, num2);

    printf("before : num1 = %f, num2 = %f\n", num1, num2);
    swap_float(&num1, &num2);
    printf("after : num1 = %f, num2 = %f\n", num1, num2);

    return 0;
}
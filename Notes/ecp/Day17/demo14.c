#include<stdio.h>

int compare1(int *p1, int *p2)
{
    return *p1 - *p2;
}
int compare2(float *p1, float *p2)
{
    return *p1 - *p2;
}
int compare3(double *p1, double *p2)
{
    return *p1 - *p2;
}

int compare(void *p1, void *p2)
{
    return *(double *)p1 - *(double *)p2;
}

int main(void)
{
    //int num1 = 20, num2 = 10;
    // float num1 = 10, num2 = 20;
    double num1 = 10, num2 = 20;
    // int ret = compare1(&num1, &num2);
    // int ret = compare2(&num1, &num2);
    int ret = compare3(&num1, &num2);

    if(ret == 0)
        printf("num1 and num2 are equal\n");
    else if(ret < 0)
        printf("num1 is less than num2\n");
    else
        printf("num1 is greater than num2\n");

    return 0;
}
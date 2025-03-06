#include<stdio.h>
/*
    void pointer :-
    - it is a generic pointer
    - it is used to store address of any type of variable
    - we can directly assign address ot any type of variable to void pointer
    - but while dereferancing void pointer, we need to typecast it with same tpye of pointer variable
    - becauase we dont know scale factor of void pointer
*/

int main(void)
{
    int num = 10;
    char ch = '%';
    double d = 3.142;

    int *pnum = &num;
    char *pch = &ch;
    double *pd = &d;

    void *ptr = NULL;
    // ptr is a pointer variable of type void *
    // NULL     ==>     (void *)0

    ptr = &num;
    printf("num = %d\n", *(int *)ptr);

    ptr = &ch;
    printf("ch = %c\n", *(char *)ptr);

    ptr = &d;
    printf("d = %lf\n", *(double *)ptr);


    return 0;
}
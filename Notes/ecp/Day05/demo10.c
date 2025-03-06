#include<stdio.h>

int main(void)
{
    int num = 1;

    do
    {
        printf("num = %d\n", num++);
    }while(num != 11);
    
    return 0;
}
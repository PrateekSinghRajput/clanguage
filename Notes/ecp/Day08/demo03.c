#include<stdio.h>

// write program to count number of function calls of given function.

int function(void);

//static int count = 0;

int main(void)
{
    //int count;
    printf("count = %d\n", function());
    printf("count = %d\n", function());
    //count++;
    printf("count = %d\n", function());
    return 0;
}

int function(void)
{
    static int count ;
    printf("count = %d\n",count);       // 0, 1, 1
    printf("Hello DESD\n");
    count++;
    return count;
}
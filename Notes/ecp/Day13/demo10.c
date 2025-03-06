#include<stdio.h>

int main(void)
{
    //char str[24];
    char *str = "sunbeam";

    str = "desd";

    printf("ENter string : ");
    scanf("%s", str);

    printf("str = %s\n", str);

    /*
    char str[24] = "Sunbeam Pune";      // stack
    char *ptr = "Sunbeam Pune";         // ro data
                                        // ptr - stack
    str[0] = 'F';
    printf("str = %s\n", str);
    ptr[0] = 'F';
    printf("ptr = %s\n", ptr);
    */




    return 0;
}
#include<stdio.h>
#include<string.h>

int main(void)
{
    char str1[64] = "I#am # student#of PG-DESD#course";
    char *ptr;

    ptr = strtok(str1, " #");

    while(ptr != NULL)
    {
        printf("ptr = %s\n", ptr);
        ptr = strtok(NULL, " #");
    }

    return 0;
}
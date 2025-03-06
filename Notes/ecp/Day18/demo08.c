#include<stdio.h>

int main(void)
{
    char str[64];

    FILE *fp = fopen("demo01.c", "r");

    while((fgets(str, sizeof(str), fp)) != NULL)
    {
        printf("%s", str);
    }

    fclose(fp);

    return 0;
}
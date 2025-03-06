#include<stdio.h>

int main(void)
{
    int i, num;

    printf("%d * %d = %d\n", 2, 2, 2 * 2);
    printf("%d * %d = %d\n", i, num, i * num);

    for( i = 0 ; i < 10 ; i++)
    {
        if(i == 4 || i == 6)
            continue;
        printf("i = %d\n", i);
    }
    return 0;
}
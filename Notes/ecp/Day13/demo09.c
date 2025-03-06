#include<stdio.h>

int main(void)
{
    char *argv[4] = { "PG-DESD", "PG-DAC", "PG-DMC", "PG-DBDA"};

    for(int i = 0 ; i < 4 ; i++)
        printf(" argv[%d] = %s\n",  i, argv[i]);

    for(int i = 0 ; i < 4 ; i++)
        printf("[%u] argv[%d] = %u\n", &argv[i],i, argv[i]);

    return 0;
}
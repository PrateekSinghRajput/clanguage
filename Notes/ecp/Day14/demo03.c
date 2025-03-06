#include<stdio.h>

// Environment variable

int main(int argc, char *argv[], char *envp[])
{
    int i = 0;
    for( ; envp[i] != NULL ; i++)
        printf("envp[%d] = %s\n", i, envp[i]);
    return 0;
}
#include<stdio.h>
#include<string.h>

int main(void)
{
    char str[64] = "I love my India";
    char str1[64] = "I#am student#of PG-DESD#course";
    char *ptr;
    // char *strtok( char *str, const char *delim );
    // arg1 : address of string which you want to tokenise
    // arg2 : delimiter by whihc you want to tokenise
    // ret : address of token

    ptr = strtok(str, " \n#");
    printf("%s\n", ptr);

    ptr = strtok(NULL, " \n#");
    printf("%s\n", ptr);

    ptr = strtok(NULL, " \n#");
    printf("%s\n", ptr);

    ptr = strtok(NULL, " \n#");
    printf("%s\n", ptr);

    ptr = strtok(NULL, " \n#");
    printf("%s\n", ptr);

    return 0;
}
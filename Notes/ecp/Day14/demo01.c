#include<stdio.h>
/*
    command line arguments
    - these are the arguments which are passed to main function
    - arguments are passed from command line when you are running program
    - all arguments are seperate character strings
    - as it is list of arguments, it is catched inside array of char pointer
    - argc - count of command line arguments
    - argv[] - list of command line arguments
    - argv[0] - name of your executable file
    - argv[1] onwards you will get all your arguments
    - last argument passed is always NULL
    - int main(int argc, char *argv[])
*/

int main(int argc, char *argv[])
{
    int i;
    printf("Number of cmd line arg : %d\n", argc);

    for(i = 0 ; i < argc ; i++)
        printf("argv[%d] = %s\n", i, argv[i]);

    i=0;
    while(argv[i] != NULL)
    {
        printf("argv[%d] = %s\n", i, argv[i]);
        i++;
    }
    return 0;
}
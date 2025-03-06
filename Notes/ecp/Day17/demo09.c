#include<stdio.h>
/*
    Function pointer:
    - it is a pointer which is used to store address of function
    - function definiations are stored in text section of exe file
    - function address - address of starting line of your function
    - name of your function indicates address of function 

    - Declaration of function
        <return type> <function name>([List of type of arguments]);

    - Declaration of function pointer
        <return type> (*<function pointer name>)([List of type of arguments]);

    function            -->     int add(int, int);
    function pointer    -->     int (*ptr)(int, int);

    function            -->     void add(int, int);
    function pointer    -->     void (*ptr)(int, int);

    function            -->     float add(float, float);
    function pointer    -->     float (*ptr)(float, float);

    function            -->     void fun(char, int);
    function pointer    -->     void (*ptr)(char, int);

                                void (*ptr)(int, char);     X
*/

int fun(void);

int main(void)
{
    int (*funptr)(void) = NULL;
    // funptr is function pointer '*' of collection '()' of instructions
    // which take nothing
    // returns one int 

    funptr = fun;

    //printf("fun() - %d\n", fun());
    printf("funptr() - %d\n", funptr());

    printf("fun = %u\n", fun);
    printf("funptr = %u\n", funptr);
    

    return 0;
}

int fun(void)
{
    int num = 10;
    return num;
}
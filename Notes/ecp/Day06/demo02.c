#include<stdio.h>
/*
    enum
    - user defined data type
    - it is used to make your program more readable
    - enum <identifier> { <list of constants> };
*/
enum boolean{
    FALSE, TRUE
};


int main(void)
{
    printf("TRUE = %d\n", TRUE);
    printf("FALSE = %d\n", FALSE);

    return 0;
}
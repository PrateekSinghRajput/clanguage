

#include<stdio.h>
int main()
{
    int x,y;
    //const int* p;//p pointing to an address has an constant value.
    //int const * p;//p pointing to an address has an constant value.
    //int * const p = &x;//p storing an address of x variable and it is constant.
    const int * const p = &x;//here pointer pointing to to the var address is constant as well as the value contain by that variable is also constant.
    
    *p=20;//for cae 1 nd 2: as *p pointing to the const integer it is not allowed to assign new variable as value pointing by p is constant. 
    printf("p++=%d\n",p++);
    printf("(*P)++=%d\n",(*p)++);//for cae 1 nd 2: as *p pointing to the const integer it is not allowed to increment it to a new value.                         
    p=&y;//for case 3 as p is pointing to the x variable as a const. ptr it is not allowed to point it at another var. 
    printf("p=%d\n",p);
    //printf("%d\n",p++);
    return 0;
}



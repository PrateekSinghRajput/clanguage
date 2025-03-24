#include<stdio.h>
int main()
{
    int (*q)[3][4];
    printf("Size of q =%ld\n",sizeof(q));
    printf("Size of *q =%ld\n",sizeof(*q));
    printf("Size of **q =%ld\n",sizeof(**q));
    printf("Size of ***q =%ld\n",sizeof(***q));
    return 0;
}

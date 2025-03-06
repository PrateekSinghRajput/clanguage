#include<stdio.h>

typedef enum boolean{
    FALSE, TRUE
}bool_t;

int main(void)
{

    printf("Scale factor of int * : %d\n", sizeof(int));
    printf("Scale factor of char * : %d\n", sizeof(char));
    printf("Scale factor of float * : %d\n", sizeof(float));
    printf("Scale factor of double * : %d\n", sizeof(double));

    printf("Scale factor of int ** : %d\n", sizeof(int *));  
    printf("Scale factor of char ** : %d\n", sizeof(char *)); 
    printf("Scale factor of float ** : %d\n", sizeof(float *)); 
    printf("Scale factor of double ** : %d\n", sizeof(double *));  

    printf("Scale factor of bool_t * : %d\n", sizeof(bool_t)); 

    return 0;
}
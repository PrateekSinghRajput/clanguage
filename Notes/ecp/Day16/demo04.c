#include<stdio.h>
#include<stdlib.h>


int main(void)
{
    /*
    malloc() 
        - allocates memory dynamically
        - it take one arg : total size to be allocated
        - after successful allocation of memory on heap, it returns starting address of that memory block
        - return address is of type void *
        - thats why we need to typecast it by same pointer type of data
        - if it fails, it returns NULL
    */
    int *ptr = (int *)malloc(sizeof(int));
    // it allocated 4 bytes of block inside memory and returns starting address of that block
    // we have catched that address inside ptr variable
    if(ptr == NULL)
    {
        printf("malloc() failed\n");
        exit(1);
    }

    *ptr = 111;
    printf("*ptr = %d\n", *ptr);

    free(ptr);

    return 0;
}
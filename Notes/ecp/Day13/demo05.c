#include<stdio.h>
#include<string.h>

void print_array(int arr[], int size)
{
    for(int i = 0 ; i < size ; i++)
        printf("%x\t", arr[i]);
    printf("\n");
}

int main(void)
{
    // void* memcpy( void *dest, const void *src, size_t count );
    // arg1 : address of dest
    // arg2 : address of src
    // arg3 : count to be copied
    // ret : copy of des

    int src[5] = {11, 22, 33, 44, 55};

    int dest[5];

    memset(dest, 0, sizeof(dest));
    printf("src :: ");
    print_array(src, 5);
    printf("dest :: ");
    print_array(dest, 5);

    //memcpy(dest, src, sizeof(src));
    memcpy(dest, src, 10);

    printf("after dest : ");
    print_array(dest, 5);

    return 0;
}
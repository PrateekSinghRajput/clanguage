#include<stdio.h>
#include<string.h>

int main(void)
{
    // void* memmove( void* dest, const void* src, size_t count );
    // arg1 : address of dest
    // arg2 : address of src
    // arg3 : count of bytes to be copied
    // ret : copy oif dest
    // Here src addresses and destination addresses may overlap

    char str[24] = "******######";
    
    printf("str = %s\n", str);

    memmove(str+3, str, 5);

    printf("str = %s\n", str);

    return 0;
}
#include<stdio.h>
#include<string.h>

int main(void)
{
    char src[24] = "sunbeam";
    char dest[24] = "##########";

    printf("dest = %s\n", dest);

    memcpy(dest, src, 3);
    dest[3] = '\0';
    
    printf("dest = %s\n", dest);
    

    return 0;
}
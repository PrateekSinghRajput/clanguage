#include<stdio.h>
#include<string.h>

int main(void)
{
    // void *memset( void *dest, int ch, size_t count );
    // dest	-	pointer to the object to fill
    // ch	-	fill byte
    //  count	-	number of bytes to fill
    // ret - A copy of dest
    int num = 10;
    //printf("num = %d\n", num);
    //memset(&num, 0, sizeof(num));
    //printf("num = %d\n", num);
    printf("num = %#X\n", num);
    memset(&num, 1, sizeof(num));
    printf("num = %#X\n", num);

    char str[64] = "THis is PG-DESD class\n";
    // base address of str = 100
    // str = 100
    // str + 4 = 100 + 4 = 104
    printf("str = %s\n", str);
    //memset(str, '#', 4);
    memset(str+4, '#', 10);
    printf("str = %s\n", str);
    
    int arr[5];

    memset(arr, 0, sizeof(arr));
    for(int i = 0 ; i < 5 ; i++)
        printf("%-4d", arr[i]);



    return 0;
}
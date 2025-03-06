#include<stdio.h>

#pragma pack(2)

struct test{
    int num;        // 4
    char ch;        // 1
    float flt;          // 4
};                  // 9 bytes


int main(void)
{
    printf("sizeof(struct test) = %d\n", sizeof(struct test));

    return 0;
}
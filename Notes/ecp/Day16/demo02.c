#include<stdio.h>

union test{
    int num;        // 4
    char ch[2];     // 2
};                  // 6 X          --> 4 bytes

int main(void)
{
    //union test t1 = {0x00000000, "A"};        // not allowed
    union test t1 = {0x00000000};

    printf("sizeof(t1) = %d\n", sizeof(t1));

    printf("num = %x\n", t1.num);
    printf("ch[0] = %x, ch[1] = %x\n", t1.ch[0], t1.ch[1]);

    t1.num = 9;

    printf("num = %x\n", t1.num);
    printf("ch[0] = %x, ch[1] = %x\n", t1.ch[0], t1.ch[1]);

    t1.ch[0] = 'A';
    t1.ch[1] = 'B';

    printf("num = %x\n", t1.num);
    printf("ch[0] = %x, ch[1] = %x\n", t1.ch[0], t1.ch[1]);

    printf("&t1 = %u\n", &t1);
    printf("&t1.num = %u\n", &t1.num);
    printf("t1.ch = %u\n", t1.ch);
    return 0;
}
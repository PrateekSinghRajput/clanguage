#include<stdio.h>

// typedef <existing name> <new name>;

typedef int integer;

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;

typedef unsigned long long size_t;

enum boolean{
    FLASE, TRUE
};

typedef enum boolean bool_t;

int main(void)
{
    //int num;
    integer num;

    uint8_t num1;   //unsigned char num1;
    uint16_t num2;  //unsigned short num2;
    uint32_t num3;    //unsigned int num3;

    unsigned long long size = sizeof(int);
    size_t size1 = sizeof(char);

    printf("size of int = %d\n", size);

    enum boolean b1;
    bool_t b2;

    return 0;
}
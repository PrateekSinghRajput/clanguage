#include<stdio.h>
#include "test.h"
#include "test.h"
#include "test.h"

#define VERSION 8

int main(void)
{

#undef VERSION

#define VERSION 3

#if VERSION == 1
    printf("version1\n");
#elif VERSION == 2
    printf("version2\n");
#elif VERSION == 3
    printf("version3\n");
#else
    printf("version not specified\n");
#endif

    return 0;
}
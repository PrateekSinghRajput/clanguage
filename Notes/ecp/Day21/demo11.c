#include <stdio.h>

int main() {
    char *p = NULL;
    short *q = NULL;
    float *r = NULL;
    double *s = NULL;
    printf("%lu, %lu, %lu, %lu\n", ++p, ++q, ++r, ++s);
    return 0;
}
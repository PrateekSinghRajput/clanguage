#include <stdio.h>

int main() {
    int x = 10;
    int y = 20;
    int * const p = &x; 

    *p = 20;  
    (*p)++;   


    printf("x = %d\n", x);
    return 0;
}

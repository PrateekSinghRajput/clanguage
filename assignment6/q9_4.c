#include <stdio.h>

int main() {
    const int x = 10;
    const int y = 20;
    const int * const p = &x;  

    // *p = 20;  
    // p++;     
    // (*p)++;  
    // p = &y;   

    printf("p points to value: %d\n", *p);
    return 0;
}

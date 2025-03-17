#include <stdio.h>

int main() {
    int const x = 10;
    int const y = 20;
    int const *p = &x;  


    p++;        
    p = &y;     

    printf("p points to value: %d\n", *p);
    return 0;
}

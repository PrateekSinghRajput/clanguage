#include <stdio.h>

int main() {
    const int x = 10;
    const int y = 20;
    const int *p = &x; 
    
    p++;        
    p = &y;    

    printf("p points to value: %d\n", *p);
    return 0;
}

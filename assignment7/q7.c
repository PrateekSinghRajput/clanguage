#include <stdio.h>

void test(const int* ptr) {
    printf("Value: %d\n", *ptr);
}

void test2(int* ptr) {
    printf("Value: %d\n", *ptr);
}

int main() {
    int x = 10;
    int *p = &x;
    const int *q = &x;
    
    test(p);  
    test(q);  
    
    // test2(q); 
    test2(p);  
    
    return 0;
}

#include <stdio.h>

// Function with a local static variable to count calls
void demoFunction() {
    static int count = 0; 
    count++;
    printf("Function called %d times\n", count);
}

int main() {
    demoFunction();
    demoFunction();
    demoFunction();
    demoFunction();
    demoFunction();
    return 0;
}
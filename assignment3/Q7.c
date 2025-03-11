#include <stdio.h>

int evaluate(int a, int b, int c, int depth) {
    if (depth == 0) {
        return a + 5;
    }
    return evaluate(++a, ++b, ++c, depth - 1);
}

int main() {
    int a = 10, b = 20, c = 30;
    int d;
    d = evaluate(++a, ++b, ++c, 1); 
    
    printf("Final values: a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);
    return 0;
}

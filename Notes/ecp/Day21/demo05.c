#include <stdio.h>

int main() {
    char *p = "SUN";
    *p = 'F'; // abort
    puts(p);
    return 0;
}


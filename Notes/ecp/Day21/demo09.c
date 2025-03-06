#include <stdio.h>
void print_bin(void *ptr, int size) {
    unsigned char *pchar = (unsigned char *)ptr;
    unsigned char num;
    int i, n;
    for(i=0; i<size; i++) {
        num = *(pchar + i);
        for(n = 7; n >= 0; n--) {
            if( num & (1 << n) )
                putchar('1');
            else
                putchar('0');
        }
        putchar(' ');
    }
    printf("\n");
}
int main() {
    int a = 65;
    float b = 123.45;
    long c = 0x11223344;
    //struct emp e = { ... };
    print_bin(&a, sizeof(a));
    print_bin(&b, sizeof(b));
    print_bin(&c, sizeof(c));
    //print_bin(&e, sizeof(e));
    return 0;
}

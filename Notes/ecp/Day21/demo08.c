#include <stdio.h>
void print_bin(int num) {
    int n;
    for(n = 31; n >= 0; n--) {
        if( num & (1 << n) )
            putchar('1');
        else
            putchar('0');
        if(n % 8 == 0)  // to improve readability of output
            putchar(' '); 
    }
    printf("\n");
}
int main() {
    int num;
    printf("enter a number: ");
    scanf("%d", &num);
    print_bin(num);
    return 0;
}

#include<stdio.h>


int main(void)
{
    int num = 1234;
    // 1 * 10^3 + 2 * 10^2 + 3 * 10^1 + 4 * 10^0

    int rev;
    int d1, d2, d3, d4;

    d4 = num % 10;      //4
    num /= 10;      // num = num / 10       // 123
    
    d3 = num % 10;      //3
    num /= 10;                              // 12
   
    d2 = num % 10;      //2
    num /= 10;                              //1
    
    d1 = num % 10;      //1

    printf("Face vlaues : %d %d %d %d\n", d1, d2, d3, d4);
    printf("Place Values : %d %d %d %d\n", d1 * 1000, d2 * 100, d3 * 10, d4 * 1);
    printf("Digits in reverse order : %d %d %d %d\n", d4, d3, d2, d1);

    rev = d4 * 1000 + d3 * 100 + d2 * 10 + d1 * 1;
    printf("reverse number : %d\n", rev);


    return 0;
}
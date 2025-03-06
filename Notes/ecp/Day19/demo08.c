#include<stdio.h>

#define ADD(a, b) a + b
#define SQR(n) (n) * (n)

#define SWAP(a, b, type) { type t = a; a = b; b = t;}

#define PRINT(var) printf(#var" = %d\n", var);
#define PASTE(t1, t2) t1##t2

int main(void)
{
    int num1 = 10, num2 = 20;
    int totalsum;
    printf("add(10, 20) = %d\n", ADD(10, 20));
    printf("add(num1, num2) = %d\n", ADD(num1, num2));

    printf("sqr(4) = %d\n", SQR(2 + 2));

    printf("before - num1 = %d, num2 =%d\n", num1, num2);
    SWAP(num1, num2, int);
    printf("after - num1 = %d, num2 =%d\n", num1, num2);

    printf("num1 = %d\n", num1);
    printf("num1"" = %d\n", num1);

    PRINT(num1);

    totalsum = num1 + num2;

    printf("totalsum = %d\n", PASTE(total,sum));
    
    
    return 0;
}
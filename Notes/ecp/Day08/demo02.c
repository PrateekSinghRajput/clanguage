#include<stdio.h>

static int num2 = 10;        // allowed

int main(void)
{
    static int num;     
    // static keyword is used to create variable of static storage class type
    static char ch = 'B';

   num = 20;
   // int num;
    //static int num1 = num;        // not allowed
    // we can not initialize static variables with any other variable
    // only constant values/expressions are allowed

    num = num2;
    print();
    

    printf("num = %d\n", num);
    printf("ch = %c\n", ch);
    printf("num2 = %d\n", num2);


    return 0;
}

void print(void)
{
    //printf("num= %d\n", num);
    // we can not access static variables out side the block
    printf("num2 = %d\n", num2);
    num2 = 20;
}
#include<stdio.h>

//local/auto storage class

int main(void)
{
    auto int num1 = 10, num2 = 20;     // auto storage class
    // using auto keyword is optional

    printf("main() :: num1 = %d, num2 = %d\n", num1, num2);

    {//block1
        int num1 = 100;

        printf("block1 :: num1 = %d, num2 = %d\n", num1, num2);

        // num2 is not declared inside block1
        // if any variable is not found in same block, it is searched in its outer block

        {// block2
            int num3 = 300;
            printf("block2 :: num1 = %d, num2 = %d, num3 = %d\n", num1, num2, num3);
        }
        //printf("block1 :: num1 = %d, num2 = %d, num3 = %d\n", num1, num2, num3);
        // num3 is not declared inside block1
        // if any variable is not found in same block it will not be serached inside its inner block
    }
    printf("main() :: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
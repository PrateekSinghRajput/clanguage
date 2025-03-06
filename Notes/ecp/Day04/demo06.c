#include<stdio.h>

// Find out maximum number out of three user entered numbers.

int main(void)
{
    int num1, num2, num3, max;

    printf("Enter three numbers : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1 > num2)
    {//num1
        if(num1 > num3)
            max = num1;
        else
            max = num3;
    }
    else
    {//num2
        if(num2 > num3)
            max = num2;
        else
            max = num3;
    }

    printf("Maximum value = %d\n", max);

    max = num1 > num2 ? 
            num1 > num3 ? 
                num1 : 
                num3 
            : 
            num2 > num3 ? 
                num2 : 
                num3 ;

    // (condition) ? [ (cond) ? st1 : st2 ] : [ (cond) ? st1 : st2 ];
    
    printf("Maximum value = %d\n", max);
    return 0;
}
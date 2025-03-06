#include<stdio.h>

int main(void)
{
    int res, num1, num2;
    int flag = 0;

    printf("Enter numbers : ");
    scanf("%d %d", &num1, &num2);

    if(num2 != 0)
    {
        res = num1 / num2;
        //printf("%d / %d = %d\n", num1, num2, res);
    }
    else
    {
        printf("Divide by zero error\n");
        flag = 1;
        //goto END;
    }
    if(flag == 0)
        printf("%d / %d = %d\n", num1, num2, res);
//END:
    return 0;
}
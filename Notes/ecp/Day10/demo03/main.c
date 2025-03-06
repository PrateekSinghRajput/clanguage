#include<stdio.h>
#include"fun.h"

int flag = 0;

int main(void)
{
    int choice;
    int num;
    int base, index;
    int num1, num2;
    

    while((choice = menu_list()) != EXIT)
    {
        switch(choice)
        {
            case FACT:
                printf("Enter num : ");
                scanf("%d", &num);
                printf("fact = %d\n", factorial(num));
                break;

            case POW:
                printf("ENter base and index : ");
                scanf("%d %d", &base, &index);
                printf("power = %d\n", power(base, index));
                break;

            default:
                printf("Invalid option\n");
                break;

            case DIV:
                printf("Enter two numbers : ");
                scanf("%d %d", &num1, &num2);
                if(num2 == 0)
                    flag = 1;

                printf("%d / %d = %d\n", num1, num2, div(num1, num2));
                break;
        }
    }

    return 0;
}
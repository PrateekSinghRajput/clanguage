#include<stdio.h>

// Write a menu driven program to perfrom some basic arithmetic operatois.
// menu driven program
// - some options(menu) are shown to user
// - we ask user to enter his/her choice
// - depending on choice entered by user, some set of statements is executeded
// - this will continue till user wants

// typed declaration
enum options{
    EXIT, ADDITION=1, SUBTRACTION, MULTIPLICATION, DIVISON
};

int main(void)
{
    int num;
    //int choice;
    enum options choice;
    int res, num1, num2;
    

    do
    {
        printf("0. Exit\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);

        if(choice != 0)
        {
            printf("Enter num1 and num2 : ");
            scanf("%d %d", &num1, &num2);
        }

        switch(choice)
        {
            case ADDITION:
                res = num1 + num2;
                break;
            case SUBTRACTION:
                res = num1 - num2;
                break;
            case MULTIPLICATION:
                res = num1 * num2;
                break;
            case DIVISON:
                if(num2 != 0)
                    res = num1 / num2;
                else
                {
                    printf("Divide by zero error\n");
                    goto END;
                }
                break;
            case EXIT:
                break;
        }
        if(choice != 0)
            printf("Res = %d\n", res);
END:
    printf("");
    }while(choice != 0);

    return 0;
}
#include<stdio.h>

int main(void)
{
    int num1, num2, res;
    char ch;
    printf("ENter num1, opr and num2 : ");
    // scanf("%d %c %d", &num1, &ch, &num2);
    fscanf(stdin, "%d %c %d", &num1, &ch, &num2);

    switch(ch)
    {
        case '+':
            res = num1 + num2;
            break;
        case '-':
            res = num1 - num2;
            break;
        case '/':
            if(num2 == 0)
                fprintf(stderr, "Divide by zero error\n");
            else 
                res = num1 / num2;
    }

    //printf("%d %c %d = %d\n", num1, ch, num2, res);
    fprintf(stdout, "%d %c %d = %d\n", num1, ch, num2, res);

    return 0;
}
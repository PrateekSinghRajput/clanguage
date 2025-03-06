#include<stdio.h>

// formatted input/output
// fprintf/fscanf

int main(void)
{
    int num1, num2, res;
    char ch;
    FILE *fpin = fopen("in.txt", "r");
    FILE *fpout = fopen("out.txt", "w");
    FILE *fperr = fopen("err.txt", "a");


    //printf("ENter num1, opr and num2 : ");
    // scanf("%d %c %d", &num1, &ch, &num2);
    fscanf(fpin, "%d %c %d", &num1, &ch, &num2);

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
                fprintf(fperr, "Divide by zero error\n");
            else 
                res = num1 / num2;
    }

    //printf("%d %c %d = %d\n", num1, ch, num2, res);
    if(num2 != 0)
        fprintf(fpout, "%d %c %d = %d\n", num1, ch, num2, res);

    fclose(fpin);
    fclose(fpout);
    fclose(fperr);

    return 0;
}
#include<stdio.h>
#include<stdlib.h>
// .\a.exe 10 + 20

int main(int argc, char *argv[])
{
    if(argc != 4)
    {
        printf("Run your program as : <name of exe> <op1> <opr> <op2>\n");
        exit(1);
    }
    // "1234" = 1234
    // "12 3" = ?
    // "123D4" = ?

    printf("sizeof(argv) = %d\n", sizeof(argv));
    
    int op1 = atoi(argv[1]);
    int op2 = atoi(argv[3]);
    char opr = *argv[2];

    switch(opr)
    {
        case '+':
            printf("%d %c %d = %d\n", op1, opr, op2, op1 + op2);
            break;
        case '-':
            printf("%d %c %d = %d\n", op1, opr, op2, op1 - op2);
            break;
        case '/':
            printf("%d %c %d = %d\n", op1, opr, op2, op1 / op2);
            break;        
    }
    return 0;
}
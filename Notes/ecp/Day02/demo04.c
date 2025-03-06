#include<stdio.h>

int main(void)
{
    char ch = 'B';
    int num = 66;

    printf("ch = %c\n", ch);
    printf("ASCII Value of A = %d\n", 'A');

    printf("ASCII Value of %c = %d\n", ch, ch);

    printf("ASCII value of \\n = %d\n", '\n');
    printf("ASCII value of \\t = %d\n", '\t');
    printf("ASCII value of \\r = %d\n", '\r');
    printf("ASCII value of \\b = %d\n", '\b');
    printf("ASCII value of \\a = %d\n", '\a');

    printf("Associated character to %d = %c\n", num, num);
    return 0;
}
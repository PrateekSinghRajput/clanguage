#include<stdio.h>

int main(void)
{
    int num, onum;
    int nodigit = 0, sumofdigits = 0;
    int rem, rev = 0;

    printf("Enter number : ");
    scanf("%d", &num);      // init

    onum = num;

    while(num != 0) // cond
    {
        // body
        rem = num % 10;
        printf("%d\n", rem);
        rev = rev * 10 + rem;
        sumofdigits += rem;
        nodigit++;
        // mod
        num /= 10;
    }
    //  num     num != 0    rem     nodigit     sumofdigit  rev
    //  1234    T           4       1           4           4
    //  123     T           3       2           7           43
    //  12      T           2       3           9           432          
    //  1       T           1       4           10          4321
    //  0       F

    printf("No of Digits = %d\n", nodigit);
    printf("Sum of Digits = %d\n", sumofdigits);
    printf("Reverse Number = %d\n", rev);
    if(onum == rev)
        printf("%d number is palindrome\n", onum);
    else
        printf("%d number is not palindrome\n", onum);

    return 0;
}
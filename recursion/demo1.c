#include <stdio.h>

int rsum(int);

int main(){

    int num, sum;
    int n;
    printf("Enter Number: ");
    scanf("%d", &num);
    sum = rsum(num);
    printf("Sum of digits is %d\n", sum);
    return 0;

}

int rsum(int n)
{
    int s, reminder;
    if(n!=0)
    {
        reminder = n % 10;
        s = reminder + rsum(n / 10);

    }
    else
    return 0;
    return s;
}
#include<stdio.h>
int main(void)
{
	int num,d0,d1,d2;
	printf("Enter 3 -digit number\n");
	scanf("%d",&num);
	d0=num%10;
	d1=((num/10)%10);
	d2=num/100;
	printf("\nAfter reversal of digits:%d%d%d\n",d0,d1,d2);
	return 0;

}

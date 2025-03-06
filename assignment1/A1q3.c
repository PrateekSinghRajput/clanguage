#include<stdio.h>
int main(void)
{
	int a,b,c;
	printf("Enter three different numbers\n");
	scanf("%d,%d,%d",&a,&b,&c);
	if(a>b)
	{
		if(c>a)
			printf("%d is biggest number",c);
		else
			printf("%d is biggest number",a);
	}
	else
	{
		if(c>b)
	
			printf("%d is biggest number",c);
		else
			printf("%d is biggest number",b);
	}
	return 0;
}

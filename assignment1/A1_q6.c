#include<stdio.h>
int main()
{
	int i,n,num,sum=0;
	float avg;
	printf("Enter the number of terms:");
	scanf("%d",&n);

	int number[n];
	printf("Enter %d numbers\n",n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&num);
	sum +=num;
	}
	avg=sum/n;

	printf("sum is:%d\n",sum);
	printf("Average is:%f",avg);


return 0;
}

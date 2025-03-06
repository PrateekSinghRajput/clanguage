#include <stdio.h>

int main()
{
	int i,j,rows,spaces,num;
//TAKE INPUT

	printf("Enter the numbers of rows:");
	scanf("%d",&rows);

	for(i=1;i<=rows;i++)
	{
		for(spaces=0;spaces<=(rows-i); spaces++)
		{
			printf(" ");
		}

		for(num=1;num<=(2*i-1);num++)
		
		{
			printf("%d",i);
		}
		printf("\n");
	}
	return 0;
}

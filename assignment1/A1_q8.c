#include <stdio.h>

int main()
{
	int i,j,k;
	printf("Enter numbers of row:");
	scanf("%d",&k);

	for(i=1;i<=k;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	return 0;
}


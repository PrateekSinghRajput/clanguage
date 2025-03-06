#include<stdio.h>
int main()
{
int marks;
	printf("Enter the marks:");
	scanf("%d",&marks);

	if(marks<=40)
	  printf("\nFail\n");
	else if(marks<=50)
	  printf("\nPass\n");
	else if(marks<=60)
	  printf("\nC\n");
	else if(marks<=70)
	  printf("\nB\n");
	else if(marks<=80)
	  printf("\nB+\n");
	else if(marks<=85)
	  printf("\nA\n");
	else if(marks<=90)
	  printf("\nA+\n");
	else if(marks<=95)
	  printf("\nO\n");
	else
	  printf("\nO+\n");
return 0;
}

#include<stdio.h>

int main(){

	int a=5;
	int b=3;

	int sum=a+b;
	int sub=a-b;
	int mul=a*b;
	int div=a/b;

	void *ptr;

	ptr=&sum;

	printf("sum=%d\n",*(int*)ptr);
	
	ptr=&sub;

	printf("sub=%d\n",*(int*)ptr);

	ptr=&div;

	printf("div=%d\n",*(int*)ptr);

	ptr=&mul;

	printf("mul=%d\n",*(int*)ptr);




}

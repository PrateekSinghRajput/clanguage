#include<stdio.h>

int main(){

	int a=5;

	float b=6.5;

	char ch='a';

	int arr[5]={10,20,30,40,50};

	void *ptr;
 
	ptr =&a;

	printf("int = %d\n",*(int*)ptr);

	ptr=&b;
	
	printf("float = %lf\n",*(float*)ptr);

	ptr=&ch;
	
	printf("char = %c\n",*(char*)ptr);

	ptr=arr;
	
	
	for(int i=0;i<5;i++)
	{	
		printf(" %d ",(*(int*)ptr+i));
	
	}
	printf("\n");
	return 0;


}

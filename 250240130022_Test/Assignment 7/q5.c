// Write a single function to return sum, product of two no.s

#include <stdio.h>
#include <stdlib.h>

int* func(int a,int b);
int main(){

	int a=5,b=9;
	int *ptr;
	
	ptr = func(a,b);
	
	printf("Sum = %d, Product = %d\n", *ptr, *(ptr+1));

	
	free(ptr);
	return 0;

}
int* func(int a,int b){

	//int 
	//arr[0] = a+b;
	//arr[1] = a*b;
	int *ptr;
	
	ptr = (int*) malloc(8);
	
	if(ptr==NULL){
		printf("\nSome error occured during malloc\n");
		exit(1);
	}
	
	*ptr = a+b;
	*(ptr+1) = a*b;

	return ptr;

}


/*Write a program to find how many times a function is being called
(use local static variable as count)*/


#include<stdio.h>

int add(int ,int);
int main(){

	int a=5;
	int b=9;

	int sum;

	sum=add(a,b);
	sum=add(sum,b);
	sum = add(sum, a);
	printf("\nFinal result of addition function is %d\n", sum);

}

int add(int a,int b){

	static int count = 0;
	count++;
	printf("\nFunction is called %d times\n", count);
	return a+b;

}

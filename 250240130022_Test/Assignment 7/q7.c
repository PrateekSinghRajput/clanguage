#include <stdio.h>


void test(int* p);
void test2(const int* q);
int main(){

	int a=6;
	const int b= 9;
	
	int *p = &a;
	const int *q = &b;
	
	test(p);
	test(q);		// const qualifier is discarded
	test2(p);
	test2(q);
}

void test(int* p){

	printf("Value of integer pointer p: %d\n", *p);
	*p = 1;
	printf("Value of integer pointer p after reassignment: %d\n", *p);
}

void test2(const int* q){

	printf("Value of const integer pointer q: %d\n", *q);
	//*q = 2;		reassignment gives error since input arguement is const type
	//printf("Value of const integer pointer q after reassignment: %d\n", *q);
}

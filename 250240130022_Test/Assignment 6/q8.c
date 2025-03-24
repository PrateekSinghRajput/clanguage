#include<stdio.h>
#include <assert.h>
int main(){

	int a=5;
	int *aptr = &a;
	
	assert(*aptr==a);
	printf("Assert succeeded\n");
}

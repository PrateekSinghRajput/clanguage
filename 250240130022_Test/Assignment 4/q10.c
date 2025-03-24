#include <stdio.h>
#include <stdlib.h>

int count(int);
int main(){

	int num;
	printf("Enter a number\n");
	
	scanf("%d", &num);
	
	printf("There are %d digits in your binary number\n", count(num));
}

int count(int num){
	int cnt;
	if(num>0){
		return 1 + count(num/10);
	}
	return 0;
}

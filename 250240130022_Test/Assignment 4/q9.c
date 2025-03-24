#include <stdio.h>
#include <stdlib.h>

int count(int, int);
int main(){

	int num, pow;
	printf("Enter the base number\n");
	scanf("%d", &num);
	printf("Enter the power of base number to calculate\n");
	scanf("%d", &pow);
	
	printf("%d raised to power of %d is: %d\n",num, pow, count(num, pow));
}

int count(int num, int pow){

	if(pow>1){
		return num * count(num, pow-1);
	}
	return num;
}

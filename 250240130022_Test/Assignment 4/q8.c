#include <stdio.h>
#include <stdlib.h>

int count(int);
int main(){

	int num;
	printf("Enter a binary number\n");
	
	scanf("%d", &num);
	
	printf("There are %d number of 1s in your binary number\n", count(num));
}

int count(int num){
	int cnt;
	if(num>0){
		if(num%10==0){
			return 0 + count(num/10);
		}
		else if(num%10==1){
			return 1 + count(num/10);
		}
		else{
			printf("The number you entered was not binary\n");
			exit(0);
		}
	}
	return 0;
}

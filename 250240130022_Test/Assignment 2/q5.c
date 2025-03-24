#include <stdio.h>

int main(){

	int n;
	printf("Enter the number\n");
	scanf("%d", &n);
	
	for(int i = 2; i<n; i++){
		if(n%i==0){
			printf("\n%d is not a prime number\n", n);
			return 0;
		}
		
	
	}
	printf("\n%d is a prime number\n", n);
	return 0;
}

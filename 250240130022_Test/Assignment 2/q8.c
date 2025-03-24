#include <stdio.h>

int main(){

	int n,sum=0;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	for(int i = 1; i<=n; i++){
		if(n%i==0){
			//printf("\n%d",i);
			sum+=i;
		}
	}
	//printf("\nsum= %d", sum);
		
	if(sum/2==n){
	
		printf("\n%d is a perfect number\n", n);
	}
	else{
	
		printf("\n%d is not a perfect number\n", n);
	}
	

}	

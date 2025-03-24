#include <stdio.h>

int sumf(int);
int main(){

	int n, sum=0;
	printf("Enter a number to find the recursive sum of its digits: ");
	scanf("%d", &n);
	
	printf("\nRecursive sums of %d are: \n", n);
	sum=sumf(n);
	

}

int sumf(int n){
	
	int sum = 0;
	for(int i=n; i>0; i/=10){
		
		sum+= n%10;
		n/=10;
		//printf("\n i = %d sum = %d n = %d\n", i, sum, n);
		
	}
	printf("%d\n", sum);
	if(sum/10>0){
	
		sum = sumf(sum);
	}
	return sum;
	

}

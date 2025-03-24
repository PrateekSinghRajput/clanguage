// Write a program to find GCD of numbers.
// Iterative approach

#include <stdio.h>

int gcd(int, int);
int main(){

	int n1, n2, temp, lcm = 1;
	printf("Enter the numbers\n");
	scanf("%d %d", &n1, &n2);
	
	if(n2>n1){
		temp = n1;
		n1 = n2;
		n2 = temp;
	}
	//n1 must be the higher number

	printf("\nGCD = %d\n", gcd(n1, n2));
}

int gcd(int n1, int n2){

	int hcf = 0;

	for(int i=1; i<=n1; i++){
	
		
		if(n1%i==0 && n2%i==0){
		
			hcf = i;		
		}
	}
	return hcf;
}

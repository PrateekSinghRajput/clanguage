// Write a program to find factorial of n.
// Recursive approach


#include <stdio.h>

int factorial(int);
int main(){
printf("Enter the number for the factorial:\n");
int f;
scanf("%d", &f);


printf("\n%d! = %d\n", f, factorial(f));
}

int factorial(int n){

	int fact = 1;
	
	if(n>0){
	
		fact = n * factorial(n-1);
		return fact;
	}

	else{
		return fact;
	}
}

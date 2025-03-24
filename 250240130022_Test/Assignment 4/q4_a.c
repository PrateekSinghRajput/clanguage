// Write a program to find factorial of n.
// Iterative approach

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

	for(int i = n; i>0; i--){

		fact = fact*i;
	}
	return fact;
}

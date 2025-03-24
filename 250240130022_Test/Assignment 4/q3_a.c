// Write a program to find sum of n numbers.
// Iterative approach

#include<stdio.h>

int summ(int*, int);
int main(){

	int n;
	printf("Enter size of array\n");
	scanf("%d", &n);
	int arr[n];
	int *ptr = &arr[0];
	

	for(int i=0;i<n;i++){

		arr[i] = i*2+1;
		printf("%d ", arr[i]);
	}
	
	
	// array created
	printf("\nSum = %d\n", summ(ptr, n));
	
}

int summ(int* ptr, int n){

	int s = 0;
	for(int i = 0; i<n; i++){
	
		s+=*(ptr+i);
	}
	return s;
}

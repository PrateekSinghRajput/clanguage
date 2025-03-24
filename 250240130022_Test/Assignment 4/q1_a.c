// Q1. Write a program to implement display and reverse display function
//for integer array element.
//Using iterative approach

#include<stdio.h>

int display(int*, int);
int main(){

	int n;
	printf("Enter size of array\n");
	scanf("%d", &n);
	int arr[n];
	int *ptr = &arr[0];
	

	for(int i=0;i<n;i++){

		arr[i] = i*2+1;
	}
	
	// array created
	
	display(ptr, n);
	printf("\n");
	
}

int display(int* ptr, int n){

	for(int i=n-1; i>=0; i--){
	
		printf("%d ", *(ptr+i));
	}
	printf("\n");

}

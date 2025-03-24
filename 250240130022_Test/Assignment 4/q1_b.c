// Q1. Write a program to implement display and reverse display function
//for integer array element.
//Using recursive approach

#include<stdio.h>

int display(int*,int);
int main(){

	int n;
	printf("Enter size of array\n");
	scanf("%d", &n);
	printf("\n");
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

	int i = n;
	if(i>=1){
		
		printf("%d ", *(ptr+i-1));
		display(ptr, n-1);
	}
	else{
		return 0;
	}
}



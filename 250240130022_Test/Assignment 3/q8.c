#include <stdio.h>

int search(int* , int, int);
int main(){

	int n;
	
	float avg;
	printf("Enter a number to generate an array\n");
	scanf("%d", &n);
	int arr[n];
	int *ptr = &arr[0];
	printf("Array: ");
	
	for(int i=0; i<n; i++){
	
		arr[i] = (i*2)+1;
		printf("%d, ", arr[i]);
	}
	int sum = arr[0], max = arr[0], min = arr[0];
	
	// array is declared and has n integer values
	
	for(int i = 1; i<n; i++){
	
		sum+= arr[i];
		if(arr[i]>arr[i-1]){
		
			max = arr[i];
		}
		
		if(arr[i]<arr[i-1]){
		
			min = arr[i];
		}
		
	
	}
	
	printf("\nsum = %d\navg = %f\nmax = %d\nmin = %d\n", sum, (float)sum/n, max, min);
	printf("\nEnter the integer you want to search for in the array: ");
	int int_search;
	scanf("%d", &int_search);
	search(ptr, n, int_search);
}

int search(int* ptr, int size, int n){

	for(int i=0; i<size; i++){
	
		if(n==*(ptr+i)){
			printf("\n%d is the %dth element in the array\n", n, i+1);
			return 0;	
	}
	}
	printf("\n%d doesn't exist in the array", n);	
}

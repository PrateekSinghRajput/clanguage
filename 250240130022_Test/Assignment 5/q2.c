#include <stdio.h>

int findElement(int arr[],int, int);
int main(){

	int n, size;
	int *res;
	printf("Enter a number to initialize an array\n");
	scanf("%d", &size);
	int arr[size];
	//int *arr_ptr = arr[0];
	
	for(int i=0; i<size; i++){
	
		arr[i] = i*2+1;
		printf("%d ", arr[i]);
	}
	
	printf("\n");
	// array created
	
	printf("Enter a number to find in the array\n");
	scanf("%d", &n);
	
	res = findElement(arr, size, n);
	
	if(res==NULL){
		printf("%d was not found in the array\n", n);
	}
	else{
		printf("%d was found at location %p\n", n, res);
	}
}

int findElement(int arr[],int size, int n){

	for(int i=0; i<size; i++){
		if(arr[i]==n){
			return &arr[i];
		}
	}
	
	return NULL;
}

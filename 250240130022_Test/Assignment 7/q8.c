#include <stdio.h>
#include <stdlib.h>

int* func1d(int arr[], int n);
int** func2d(int arr2[][2], int r, int c);

int main(){

	int r=2,c=2;
	int arr[5] = {1,2,3,4,5};
	int arr2[2][2] = {{1,2},
			   {3,4}};
			   
	int *f1d = func1d(arr, 5);
	int **f2d = func2d(arr2, r, c);
	
	printf("Sum, min and max of 1d array is\n%d\t%d\t%d\n", *f1d, *(f1d+1), *(f1d+2)); 
	printf("Transpose of matrix:\n");
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
		
			printf("%d\t", f2d[i][j]);
		}
		printf("\n");
	}
	free(f1d);
	for(int i =0; i<r; i++){
	
		free(f2d[i]);
	}
	free(f2d);
	
}

int* func1d(int arr[], int n){

	int sum = 0, min=arr[0], max = arr[0];
	for(int i=0; i<n; i++){
	
		sum+=arr[i];
		if(arr[i]<min){
			min = arr[i];
		}
		if(arr[i]>max){
			max = arr[i];
		}
		
	}
	
	int *ptr = (int*) malloc(sizeof(int)*3);
	if(ptr==NULL){
		printf("\nMalloc failed\n");
		exit(1);
	}
	*ptr = sum;
	*(ptr+1) = min;
	*(ptr+2) = max;
	
	
	return ptr;
}


int** func2d(int arr2[][2], int r, int c) {
    
    int **ptr = (int**) malloc(sizeof(int*) * r);
    if(ptr==NULL){
		printf("\nMalloc failed\n");
		exit(1);
	}
    for (int i = 0; i < r; i++) {
        ptr[i] = (int*) malloc(sizeof(int) * c);
        if(ptr[i]==NULL){
		printf("\nMalloc failed\n");
		exit(1);
	}
    }

    
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            ptr[i][j] = arr2[j][i];
        }
    }

    return ptr;
}



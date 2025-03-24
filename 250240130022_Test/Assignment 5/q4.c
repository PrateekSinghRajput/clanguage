#include <stdio.h>

int* add(int arr1[],int arr2[]);
int main(){

	int arr1[5];
	int arr2[5];
	int *sum;

	printf("enter an first array elements \n");
	for(int i=0;i<5;i++){
		
		scanf("%d",&arr1[i]);	
	}

	printf("enter an seccond array elemenst\n");
	for(int i=0;i<5;i++){
	
		scanf("%d",&arr2[i]);	
	}
	
	sum = add(arr1, arr2);
	for(int i=0;i<5;i++){	
	
		printf("%d ",*(sum+i));
	
	}	
}
int* add(int arr1[],int arr2[]){
	int sum[5];
	int *ptr = &sum[0];
	for(int i=0;i<5;i++){
		sum[i]=arr1[i]+arr2[i];
	
	}
	return ptr;
	
}

#include <stdio.h>
#include <stdlib.h>

int* whole_array_malloc();
struct my_struct* whole_array_struct();
int* base_address(int []);
struct my_struct{
	int array[3];
};
int main(){

	int arr[3];
	int *arrptr = whole_array_malloc();
	struct my_struct *stptr = whole_array_struct();
	
	printf("Base address of a 3 element array is %p\n", base_address(arr));
	printf("Returning array using malloc:\n");
	for(int i=0; i<3; i++){
	
		printf("%d\t", *(arrptr+i));
	}
	printf("\nReturning array using struct malloc:\n");
	for(int i=0; i<3; i++){
	
		printf("%d\t", (stptr->array[i]));
	}
	printf("\n");
	
}

int* base_address(int arr[3]){

	for(int i=0; i<3;i++){
		arr[i] = i;
	}
	
	
	return arr;
}

int* whole_array_malloc(){
	int *ptr = (int*) malloc(sizeof(int)*3);
	if(ptr==NULL){
		printf("\nMalloc failed\n");
		exit(1);
	}
	
	for(int i=0; i<3;i++){
		ptr[i] = i+2;
	}
	
	return ptr;
}

struct my_struct* whole_array_struct(){

	struct my_struct *stptr = (struct my_struct*)malloc(sizeof(struct my_struct));
	if(stptr==NULL){
		printf("\nMalloc failed\n");
		exit(1);
	}
	for(int i=0; i<3;i++){
		stptr->array[i] = i+4;
	}
	
	return stptr;
}
	
	


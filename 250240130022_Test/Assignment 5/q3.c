#include <stdio.h>

int* reverse(int arr[], int size);
int main(){
	
	int arr[5] = {1,2,3,4,5};
	int *ptr;
	
	ptr = reverse(arr, 5);
	printf("Reversed array: ");
	
	for(int i=0; i<5; i++){
		printf("%d ", *(ptr+i));
	}
	printf("\n");
}

int* reverse(int arr[], int size){

	int temp;
	//int *ptr = &arr[0];
	for(int i = 0; i<size/2; i++){
	
		temp = arr[i];
		arr[i] = arr[size-1-i];
		arr[size-1-i] = temp;
	}
	
	return ptr;
}

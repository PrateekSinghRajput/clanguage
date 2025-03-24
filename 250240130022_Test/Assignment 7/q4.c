// Write a function to swap two variables using Pass by value, Pass by
// reference

#include <stdio.h>

void swap_val(int, int); // cannot return multiple values so will print instead
void swap_ref(int*, int*);

int main(){

	int a=5, b = 7;
	int *a_ptr = &a, *b_ptr = &b;
	
	
	
	swap_val(a,b);
	swap_ref(a_ptr, b_ptr);
	printf("\nFinally in main, a= %d, b= %d\n", a,b); //swapping was possible due to pass by reference function swap_ref()
}

void swap_val(int a, int b){
	
	printf("\nInitially a=%d and b=%d\n", a,b);
	int temp =a;
	a=b;
	b=temp;
	
	printf("Values after swapping by value:\na=%d b=%d\n", a, b);
		
}

void swap_ref(int* a_ptr, int* b_ptr){

	printf("\nInitially a=%d and b=%d\n", *a_ptr,*b_ptr);
	int temp = *a_ptr;
	*a_ptr = *b_ptr;
	*b_ptr = temp;

	printf("Values after swapping by reference:\na=%d b=%d\n", *a_ptr, *b_ptr);
}

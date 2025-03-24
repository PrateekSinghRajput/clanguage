// Write a program to implement display and reverse display function
// for string.
// Iterative approach

#include<stdio.h>

int display(char*, int);
int main(){

	
	char str[20] = "Hello World";
	char *ptr = &str[0];
	//int n = strlen(str); 
	
	for(int i=0; i<20; i++){
		printf("%c", str[i]);	
	}
	
	printf("\n");
	display(ptr, 20);
	printf("\n");
	
	
}

int display(char* ptr, int n){

	for(int i=n-1; i>=0; i--){
		printf("%c", *(ptr+i));	
	}
	return 0;
}

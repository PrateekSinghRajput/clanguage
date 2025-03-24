// Write a program to implement display and reverse display function
// for string.
// Recursive approach

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

	int i = n-1;
	if(i>=0){
	
		printf("%c", *(ptr+i));
		display(ptr, n-1);
	}
	else{
		return 0;
	}
	
}

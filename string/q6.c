/* Q6: Write a C program to reverse the string “Welcome to CDAC Pune”, using array
notation and loops. */

#include<stdio.h>


void str_rev(char str[],char rev[]);
int strlenn(char str[]);

int main(){

	char str[100] = "Welcome to CDAC Pune";
	char rev[100];
	str_rev(str,rev);
	printf("\n%s\n", rev);
}

void str_rev(char str[],char rev[]){

	int size = strlenn(str);  
	
	//char temp;
	/*for(int i=0; i<(size)/2; i++){		// another method that reverses the array itself without changing position of '\0' character
	
		temp = str[i];
		str[i] = str[size-1-i];
		str[size-1-i] = temp;
	} */
	
	int i;
	for(i=0; i<size; i++){
	
		rev[i] = str[size-i-1];
	}
	rev[i]='\0';
}

int strlenn(char str[]){

	int count = 0;
	
	for(int i=0; str[i]!='\0'; i++){
	
		count++;
	}
	
	return count;
}

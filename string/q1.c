/* Q1: Implement your own string length finding program, print the length of the
given string.
(man strlen for reference) */

#include <stdio.h>

int strlenn(char str[]);
int main(){

	char str[20];
	printf("Enter the string: ");
	scanf("%[^\n]s", str);
	
	
	printf("Lenght of string is: %d\n", strlenn(str));
}
int strlenn(char str[]){

	int count = 0;
	
	for(int i=0; str[i]!='\0'; i++){
	
		count++;
	}
	
	return count;
}

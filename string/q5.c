/* Q5: Implement your own string concatenation function.
(man strcat for reference) */


#include <stdio.h>

void strcatt(char str1[], char str2[]);
int strlenn(char str[]);

int main(){

	char str1[100];
	char str2[100];
	
	printf("Enter two strings separated by space\n");
	scanf("%s %s", str1, str2);
	strcatt(str1,str2);	
	printf("\nnew str1 = %s\n", str1);
}

void strcatt(char str1[], char str2[]){

	int index = 0;
	for(int i=0; str1[i]!='\0'; i++){
		
		index++;
	}	
	
	//int j=0;
	
	for(int i=0; i<strlenn(str2)+1; i++){
	
		str1[i+index] = str2[i];
		//j++;
	}
	
}
	
int strlenn(char str[]){

	int count = 0;
	
	for(int i=0; str[i]!='\0'; i++){
	
		count++;
	}
	
	return count;
}


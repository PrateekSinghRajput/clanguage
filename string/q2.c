/* Q2: Implement your own string copy function.
(man strcpy for reference) */


#include <stdio.h>

void strcpyy(char strd[], char strs[]);
int strlenn(char str[]);
int main(){

	char strs[20]; // source string
	char strd[20]; // destination string
	printf("Enter the string: ");
	scanf("%[^\n]s", strs);
	
	strcpyy(strd, strs);
	printf("copied string is: %s\n", strd);
}
void strcpyy(char strd[], char strs[]){
	 
	int size_s = strlenn(strs);
	
	for(int i=0; i<size_s+1; i++){		//size_s + 1 for the \0 character
	
		strd[i] = strs[i];	
	}
	
}

int strlenn(char str[]){

	int count = 0;
	
	for(int i=0; str[i]!='\0'; i++){
	
		count++;
	}
	
	return count;
}



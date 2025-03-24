/* Q4: Write a program wherein, you will be taking input in array1 and based on the
size of array1 you need to copy the data of array1 into array2 of bigger size:
char array1[20] = “CDAC-ACTS-PUNE”;
char array2[30]; */

#include<stdio.h>
void strcpyy(char strd[], char strs[]);
int strlenn(char str[]);


int main(){

	char array1[20] = "CDAC-ACTS-PUNE";
	char array2[30];
	
	strcpyy(array2, array1);
	
	printf("array1: %s\n", array1);
	printf("array2: %s\n", array2);
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

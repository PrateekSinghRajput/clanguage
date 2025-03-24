/* Q7: Write a C program to capture Alphabets from a given strings of mixed
alphabets, numeric and special characters. Store the captured data in another array.
Example: array 1: “23w%#e$$lco--,me”
Output in array2: “welcome” */

#include<stdio.h>

int main(){
	char arr1[100] = "23w%#e$$lco--,me";
	char arr2[100];
	
	int index = 0;
	for(int i=0; arr1[i]!='\0'; i++){
	
		if((arr1[i]>='a' && arr1[i]<='z') || (arr1[i]>='A' && arr1[i]<='Z')){
			arr2[index] = arr1[i];
			index++;
		}
	}
	arr2[index] = '\0';
	
	printf("%s\n", arr2);
}

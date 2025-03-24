/* Q7: Implement Q5, and count only alphabets present in the file and exclude all other characters
like space, special character, numbers.
*/

#include <stdio.h>
#include<stdlib.h>

void setup(){

	FILE *fp;
	fp = fopen("some_file.txt", "w+");
	if(fp == NULL){
		printf("Something went wrong while creating the file\n");
		exit(1);
	}
	fprintf(fp, "%s", "Welcome to my world");
	fclose(fp);
	
}

int main(){

	setup();
	FILE *fp;
	int cnt=0;
	char ch;
	
	fp = fopen("some_file.txt", "r+");
	
	if(fp==NULL){
		printf("The file does not exist or couldn't be opened\n");
		exit(1);
	}
	
	while((ch=getc(fp))!=EOF){
		
		if(((int)ch>='a' && (int)ch<='z') || ((int)ch>='A' && (int)ch<='Z')){
			cnt++;
		}
	}
	printf("There are %d alphabets in the file\n", cnt);
}

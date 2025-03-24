/* Q5: Create a text file manually with some data, then using C program, read the total number of
characters present in the text file and print the total count at the end. */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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
	char read[200];
	fp=fopen("some_file.txt","r");
	
	if(fp==NULL){
		printf("The file does not exist or couldn't be opened\n");
		exit(1);
	}
	
	fgets(read, 200, fp);
	printf("%s\n",read);
	printf("The file has %ld characters in it\n", strlen(read));
	// the fgets function adds a newline to the incoming string so character count is increased by one
	fclose(fp);

}

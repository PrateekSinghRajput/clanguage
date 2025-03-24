/* Create a file manually in your folder with name “hello.txt” and add
the following data to the file: “Welcome to my world”

Write a C program to read one character at a time from this file and store in some array, once
you have read 7 characters (add ‘\0’ manually) then print the array data and then using fseek()
and SEEK_CUR with an offset of 7, try reading the 5 characters again from the file and store in
same array and print again. Try understanding the behavior based on output and the content of
the file.

Refer to Man page of fseek(), read some description
- Try using the same question with different offsets and SEEK_SET, SEEK_END.
- Try understanding the behavior. */

#include <stdio.h>
#include <stdlib.h>


void setup(){

	FILE *fp;
	fp = fopen("hello.txt", "w+");
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
	fp = fopen("hello.txt", "r+");
	if(fp == NULL){
		printf("Something went wrong while openning the file\n");
		exit(1);
	}
	
	char read[30];
	
	for(int i=0; i<7; i++){
	
		read[i] = fgetc(fp);
	}
	read[7] = '\0';
	
	printf("First string: %s\n", read);
	fseek(fp, 7, SEEK_CUR);
	for(int i=0; i<5; i++){
	
		read[i] = fgetc(fp);
	}
	read[5] = '\0';
	printf("Second string: %s\n", read);


	fclose(fp);
}
		

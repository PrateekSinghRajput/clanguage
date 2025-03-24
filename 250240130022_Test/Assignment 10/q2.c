/* Q2: Create a file manually name it as q2.txt and write data “Hello World” to the file, then try
opening the file using “w” mode and once opened successfully, close the file.
Then look at the file contents manually in some text editor and check the following:
- Was the file content altered?
- What was the file content after running the program?
- If the file data was altered, what was the reason behind the same? Monitor the same
findings with “r”, “r+”, “w+” modes and comment your in the same source file. */

#include<stdio.h>
#include<stdlib.h>

void setup(){
// function to do the manual operation of the assignment
	FILE *fp;
	fp = fopen("q2.txt", "w+");
	if(fp == NULL){
		printf("Something went wrong while creating the file\n");
		exit(1);
	}
	fprintf(fp, "%s", "Hello World");
	fclose(fp);
	
}

int main(){
	setup();
	
	FILE *fp;
	fp = fopen("q2.txt", "w");
	
	if(fp == NULL){
		printf("File does not exist or could not be opened\n");
		exit(1);
	}
	
	fclose(fp);
	// all contents of the file were erased as the file was truncated due to openning it in "w" mode.
}

	
	

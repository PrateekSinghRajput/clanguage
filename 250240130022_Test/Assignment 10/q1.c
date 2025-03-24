/* Q1: Write a C program to open a file named “Hello.txt” using “r”, “r+” modes, in following
cases.
Case 1: While file actually exists on the path specified
Case 2: When doesn’t exists on the path specified */

#include<stdio.h>

int main(){

	char ch;
	char file_content[100];
	FILE *fp;
	fp = fopen("Hello.txt", "r+");
	
	if(fp == NULL){
		printf("It appears Hello.txt does not exist, would you like to create one? y/n\n");
		scanf("%c", &ch);
		if(ch=='Y' || ch=='y'){
			fp = fopen("Hello.txt", "w+");
			printf("File Created!\n");
		}
		
		else{
			printf("Have a good day!\n");
		}
	}
	else{
		fgets(file_content, 100, fp);
		printf("The first 100 characters of your file read:\n%s", file_content);
	}
}

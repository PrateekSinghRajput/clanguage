/* Create a text file manually with some data, read the total number of lines present in that
text file and show the result at the end of program. */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void setup(){

	FILE *fp;
	fp = fopen("count.txt", "w+");
	if(fp == NULL){
		printf("Something went wrong while creating the file\n");
		exit(1);
	}
	fprintf(fp, "%s", "Welcome\nto\nmy\nworld");
	fclose(fp);
	
}

int main()
{	
	setup();
	int count=0;
	char read[100];
	FILE *fp;
	char ch;
	fp = fopen("count.txt","r");
	
	if(fp==NULL)
	{
		printf("File does not exits or couldn't be openned\n");
		exit(1);
	
	
	}
	
	
	while((ch=fgetc(fp)) != EOF){
	
		
		//putchar(ch);
		if(ch == '\n'){
			count++;
		}
		//putchar(ch);
	}
	
	printf("There are %d lines in the file\n",count+1);
	fclose(fp);

}

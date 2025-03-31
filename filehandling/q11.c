/* Q11: Read a given file 3 times by using the fopen() and fclose() only once.
Use the fseek() to position the stream to the starting of the file once the end of the file has
been reached.
Hence, read the same file 3 times in some array, print the data then exit the program. */



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
	
	char read[100];
	
	FILE *fp;
	
	fp = fopen("hello.txt", "r+");
	//fscanf(fp, "%s", read);
	fgets(read, 100, fp);
	printf("%s\n", read);
	//fseek(fp, 0, SEEK_SET);
	
	fp = fopen("hello.txt", "r+");
	//fscanf(fp, "%s", read);
	fgets(read, 100, fp);
	printf("%s\n", read);
	//fseek(fp, 0, SEEK_SET);
	
	fp = fopen("hello.txt", "r+");
	//fscanf(fp, "%s", read);
	fgets(read, 100, fp);
	printf("%s\n", read);
	//fseek(fp, 0, SEEK_SET);
	
}
	fclose(fp);

}

/* Q9: Given a file, write a C program to take 1 line of user input and store the data on the file:
(Implement using fgets(), Refer to man page)
Once data has been written, read the file and store the data in the array, array[];
print the same once reading is completed. */

#include <stdio.h>
#include <stdlib.h>

int main(){

	char name[20];
	char read[20];
	printf("Enter your name\n");
	
	scanf("%[^\n]s", name);
	
	FILE *fp;
	
	fp = fopen("some_file.txt", "a+");
	
	if(fp==NULL){
		printf("The file does not exist or couldn't be opened\n");
		exit(1);
	}
	
	fprintf(fp, "%s", name);
	rewind(fp);
	fgets(read, 100, fp);
	
	printf("\nData written to file: %s\n", read);
	
	
	fclose(fp);
	
}
	
	

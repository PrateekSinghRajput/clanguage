/* Q8: WAP to take input into a structure for name and PRN and store the data into a file and read
the data. */

#include <stdio.h>
#include<stdlib.h>


typedef struct student {
	char name[20];
	long prn;
	} stud_t;
	
int main(){

	stud_t s1;
	char read[30];
	printf("Enter your name and prn\n");
	scanf("%s %ld", s1.name, &s1.prn);
	
	FILE *fp;
	
	fp = fopen("some_file.txt", "w+");
	
	if(fp==NULL){
		printf("The file does not exist or couldn't be opened\n");
		exit(1);
	}
	
	fprintf(fp, "%s %ld", s1.name, s1.prn);
	printf("Name and prn written.\n");
	rewind(fp);
	printf("Reading from file:\n%s\n", fgets(read,30,fp));
	
	fclose(fp);
}

/* Q4: Implementing the code of Q3, try reading the data written previously from the file into
some memory location and print the data on the screen. */

#include<stdio.h>
#include<string.h>

int main(){
	FILE *fp;
	char name[30],prn[10], file_content[100];
	
	fp=fopen("myFirst.txt","r+");
	
	if(fp==NULL)
	{ 
		fp=fopen("myFirst.txt","w+");
		
		printf("enter the name and PRN\n");
		
		scanf("%s %s",name,prn);
		
		strcat(name," ");
		strcat(name,prn);
		
		fprintf(fp,"%s",name);
		
		
	}
	
	rewind(fp);
	fgets(file_content, 100, fp);
	
	printf("The first 100 characters of your file read using fgets():\n%s\n", file_content);
	fscanf(fp, "%s", file_content);
	printf("The first 100 characters of your file read using fscanf():\n%s\n", file_content);
	fclose(fp);
}

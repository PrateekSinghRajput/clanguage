/* Q3: Using C program Create a File named “myFirst.txt” and write your name and PRN by taking
user input and store the data into that file. (verify the data by manually opening the file) */

#include<stdio.h>
#include<string.h>

int main(){
	FILE *fp;
	char name[30],prn[10], file_content[100];
	
	fp=fopen("myFirst.txt","r");
	
	if(fp==NULL)
	{ 
		fp=fopen("myFirst.txt","w");
		
		printf("enter the name and PRN\n");
		
		scanf("%s %s",name,prn);
		
		strcat(name," ");
		strcat(name,prn);
		
		fprintf(fp,"%s",name);
		
		fclose(fp);
	}
	else{
		fgets(file_content, 100, fp);
		printf("The first 100 characters of your file read:\n%s\n", file_content);
	}

	

}

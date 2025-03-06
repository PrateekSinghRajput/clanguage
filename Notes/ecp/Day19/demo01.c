#include<stdio.h>


int main(void)
{
	char ch;
	FILE *fp = fopen("file.txt", "w");
	while((ch = fgetc(stdin)) != EOF)
			fputc(ch, fp);
	fclose(fp);
	return 0;
}

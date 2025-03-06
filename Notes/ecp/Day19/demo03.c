#include<stdio.h>

int main(void)
{
	char ch;
	FILE *fp = fopen("file.txt", "r");
	//fseek(fp, 10, SEEK_SET);
	//fseek(fp, -20, SEEK_END);
	while((ch = fgetc(fp)) != 'E')
		fputc(ch, stdout);
	fseek(fp, -1, SEEK_CUR);
	while((ch = fgetc(fp)) != EOF)
		fputc(ch, stdout);
	fclose(fp);
	return 0;
}

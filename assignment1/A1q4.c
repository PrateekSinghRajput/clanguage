#include<stdio.h>
int main(void)
{
	char ch;
	printf("Enter a character\n");
	scanf("%s",&ch);
	if(ch=='a'||ch=='i'||ch=='e'||ch=='o'||ch=='u')
		printf("Vowel\n");
	else
		printf("Constant\n");

	return 0;


}

#include<stdio.h>

int main(){

	int num=0x11223344;
	char*cp=(char*)&num;



	printf("*cp=%x\n",*cp);
	printf("*(cp+1)=%x\n",*(cp+1));
	
	if(*cp=44)
		printf("little endian\n");
	else
		printf("big endian\n");




}



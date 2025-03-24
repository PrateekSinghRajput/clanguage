#include<stdio.h>

int main(){
	
	short int num=0x1122;	

	char *cp=(char*)&num;
	int temp;
	printf("before swap=%x\n",num);

	temp=*cp;	
	*cp=*(cp+1);
	*(cp+1)=temp;


		
	
	printf("after swap=%x\n",num);
	


	





}

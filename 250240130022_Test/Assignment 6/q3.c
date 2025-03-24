#include<stdio.h>

int main(){

 int num=0x11223344;

char*cp=(char*)&num;
printf("%x\n",num);
int temp;



 for(int i=0;i<2;i++)
    {
        
        temp=*(cp+(0+i));
        *(cp+(0+i))=*(cp+(3-i));
        *(cp+(3-i))=temp;
    }

 

printf("%x\n",num);


	





}

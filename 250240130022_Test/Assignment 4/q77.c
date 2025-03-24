#include<stdio.h>
void conv2hex(int );
void disphex(int);
int main(){

int x;
printf("enter the decimal number: ");
scanf("%d",&x);

conv2hex(x);

}

void conv2hex(int n)
{

if(n>0)
{
conv2hex(n/16);
disphex(n%16);

}

else{
	return ;

}


}

void disphex(int i)
{

	char ch;
		if(i<10){
		
		
			ch='0'+i;
		}


		else{
			ch=(i-10)+'A';
			//printf("%c\n",ch);
		
		}
		
			printf("%c",ch);
			printf("\n");
}

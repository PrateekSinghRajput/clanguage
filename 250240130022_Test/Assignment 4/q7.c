#include<stdio.h>
void conv2bin(int);
void dispbin(int);
int main(){

int x;
printf("enter the number\n");

scanf("%d",x);
conv2bin(x);


}
void conv2bin(int n){

	if(n>0){
		conv2bin(n/2);
		dispbin(n%2);
	
	}
	else 
	{
		return 0;

	}

}

void dispbin(int i){

	if(i==0){
		printf("0");
	
	}else {
		printf(" 1 ");
	}
return 0;
}

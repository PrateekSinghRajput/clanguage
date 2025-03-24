#include<stdio.h>

int main(){
int n1=0,n2=1;
int n,temp=0;

printf("enter the number\n");
scanf("%d",&n);




if(n==1){

	printf("\n0 ");
}
else if (n==2)
{
	printf("\n0\n1\n");
}
	else 
{	printf("\n0\n1\n");
	for(int i=0;i<n-2;i++ ){
	
		printf("%d\n",n1+n2);
		temp=n1;
		n1=n2;
		n2=temp+n2;
	
	}
}



}

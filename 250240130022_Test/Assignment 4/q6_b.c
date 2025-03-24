#include <stdio.h>

int fib(int, int, int);
int main(){
	//int n1=0,n2=1;
	int n, n1 = 0, n2 = 1,temp=0;

	printf("enter the number\n");
	scanf("%d",&n);




	if(n==1){

		printf("\n0 ");
	}
	else if (n==2)
	{
		printf("\n0\n1\n");
	}
	else{
		printf("\n0\n1\n");
		fib(n1, n2, n);
	}
}

int fib(int n1, int n2, int n){

	int temp;
	if(n-2>0){
	
		printf("%d\n",n1+n2);
		//temp=n1;
		//n1=n2;
		//n2=temp+n2;
		fib(n2, n1+n2, n-1);
	}
}


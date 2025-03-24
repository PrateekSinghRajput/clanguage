#include <stdio.h>

int cube(int);
int main(){

	int n,res=0;
	printf("Enter a number:\n");
	scanf("%d", &n);
	int og_n = n;
	
	for(int i=n; i>0; i/=10){
	
		res += cube(n%10);
		n = n/10;
	}
	if(res == og_n){
	
		printf("\n%d is an armstrong number\n", og_n);
	}
	else{
	
		printf("\n%d is not an armstrong number\n", og_n);
	}
	
}

int cube(int a){

	a = a*a*a;
	return a;
}

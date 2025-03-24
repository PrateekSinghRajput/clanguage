#include <stdio.h>

int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);

int main(){

	typedef int (*fptr)(int,int);
	fptr fp[4] = {add, sub, mul, div};
	//int (*fptr[4])(int,int) = {add, sub, mul, div};
	int x, y, ch;
	printf("Enter two numbers x and y\n");
	scanf("%d %d", &x, &y);
	printf("Enter the operation choice:\n1 add\n2 subtract\n3 multiply\n4 divide\n");
	scanf("%d", &ch);
	
	//printf("Result of your operation: %d\n", fptr[ch-1](x,y));
	printf("Result of your operation: %d\n", fp[ch-1](x,y));

}

int add(int x,int y){
	return x+y;
}
int sub(int x,int y){
	return x-y;
}
int mul(int x,int y){
	return x*y;
}
int div(int x,int y){
	return x/y;
}

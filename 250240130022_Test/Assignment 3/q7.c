#include <stdio.h>

int main(){

	int a=10, b = 20, c=30, d;
	printf("Initially a=%d b=%d c=%d\n", a,b,c);
	
	d=++a,++b,++c,a+5;
	printf("After operation d=++a,++b,++c,a+5;\na=%d b=%d c=%d d=%d\n",a, b, c, d);
	
	a=10; 
	b = 20; 
	c=30;
	
	d=(++a,++b,++c,a+5);
	printf("After operation d=(++a,++b,++c,a+5);\na=%d b=%d c=%d d=%d\n",a, b, c, d);
}

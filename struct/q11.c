#include <stdio.h>

union A{
int x; float y; double z; int arr[2];
}a1;

union B{
int x; short int y; char ch;
char carr[4];
} b1;

int main(){
	a1.y=6.25;
	printf("x=%d\ty=%f\n", a1.x, a1.y);
	a1.z=0.15625;
	printf("%x\t%x\n\n",a1.arr[1],a1.arr[0]);
	
	printf("b1.y = %d\t b1.ch = %c\n", b1.y, b1.ch);
	printf("%s\n", b1.carr);
	b1.y =0x1122;
	printf("b1.x = %d\n", b1.x); 
}

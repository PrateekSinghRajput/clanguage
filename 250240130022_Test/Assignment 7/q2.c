// Try register storage class for local, global variables. Can we get
// address of register variable

#include <stdio.h>

int global_a = 10;
//register int global_b = 20;
// register variables cannot be global

int main(){

	int a = 1;
	register int b = 2;
	
	printf("\nAddress of global variable A is %p\n", &global_a);
	// printf("\nAddress of register global variable B is %p\n", &global_b);
	// cannot access address of register variables!
	printf("\nAddress of local variable A is %p\n", &a);
	// printf("\nAddress of register local variable A is %p\n", &b);
}

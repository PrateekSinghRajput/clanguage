#include <stdio.h>

int* test(int x);
int* corrected(int x, int* yptr);
int main(){
	int y;
	int *yptr = &y;
	printf("\n%p\n", test(2)); // address of y returned by test() is no longer valid as the stack is freed
	printf("\n%d\n", *corrected(2, yptr)); // returned variable y is passed to print function
}	

int* test(int x)
{
	int y=x*x;
	return &y;  // y is a local variable and it will be destroyed once the test function is executed
}

int* corrected(int x, int* yptr)
{
	*yptr = x*x;
	return yptr;  // y is a local variable and it will be destroyed once the test function is executed
}

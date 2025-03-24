#include <stdio.h>

int main(){

	int x,y,z, big;
	printf("Enter three numbers:\n");
	scanf("%d %d %d", &x, &y, &z);
	
	big = (x>y)?(x>z?x:z):(y>z?y:z);
	
	printf("\nBiggest number is: %d\n", big);
}

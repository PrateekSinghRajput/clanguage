#include <stdio.h>

int main(){

	int d = 123456;
	float f = 98123.4567;
	
	printf("Formatted i/o using printf\n");
	printf("Integer\n%5d %09d %-5d\n", d, d, d);
	printf("Float\n%8.3f %.2f\n", f, f);
}

#include <stdio.h>

int main(){

	int h, m, s;
	printf("Enter timespan in the format: hh mm ss\n");
	scanf("%d %d %d", &h, &m, &s);
	printf("\nTimespan in seconds: %d\n", ((h*3600) + (m*60) + s));
}

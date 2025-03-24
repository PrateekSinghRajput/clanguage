// Try some nested calls
// sqrt(pow(2,abs(x))), putchar(toupper(ch)) etc

#include <stdio.h>
#include <math.h>




int poww(int, int);
int add(int, int);
int main(){

	int a=4, b =7;
	char ch = 'd';
	
	printf("\nThis is a nested call for expression (a^2 + b^2)^3 \n %d\n", poww(add(poww(a,2), poww(b,2)), 3));
	printf("\nPrinting the code sqrt(pow(2,abs(a)))\n%f\n", sqrt(pow(2,abs(a))));
	printf("\nPrinting the code putchar(toupper(ch))\n%c\n", putchar(toupper(ch)));
		
	
	
}

int poww(int base, int n){

	int res = 1;
	for(int i=0; i<n; i++){
	
		res *= base;
	}
	return res;
}

int add(int a, int b){
	return a+b;
}



#include <stdio.h>

char int_to_str(int);
int str_to_int(char);


int main(){

	printf("%c\n", int_to_str(5));
	printf("%c\n", str_to_int('6'));
}


char int_to_str(int n){
	
	return (char)n+48;
}

int str_to_int(char n){

	return (int)n-48;
}

/* Q1: Write a C program to create a structure named “addition”, with 3 data members, num1,
num2 and sum of type int.
Taking user input, initialize the num1 and num2 and then store the result of num1+ num2 in
the sum data member; */

#include <stdio.h>

typedef struct addition{
	int num1;
	int num2;
	int sum;
} add_t;

int main(){

	add_t adder;
	
	printf("Enter 2 numbers separated by space\n");
	scanf("%d %d", &adder.num1, &adder.num2);
	adder.sum = adder.num1 + adder.num2;
	
	printf("Sum of the numbers is %d\n", adder.sum);

}

#include <stdio.h>
#include <stdio_ext.h>

int main(){

	float income, exempt=0;
	int age = 0;
	float tax=0, final_tax = 0, final_income = 0;
	char gender;
	printf("Enter your income figure\n");
	scanf("%f", &income);
	__fpurge(stdin);
	printf("\nEnter your gender (m/f)\n");
	scanf("%c", &gender);
	__fpurge(stdin);
	printf("\nEnter your age\n");
	scanf("%d", &age);

	if(income>=0 && income<= 300000){
		tax = 0;
	}
	else if(income>300000 && income<= 700000){
		tax = (income - 300000)*5/100;
	}
	else if(income>700000 && income<= 1000000){
		tax = (income-700000)*10/100 + 20000;
	}
	else if(income>1000000 && income<= 1200000){
		tax = (income - 1000000)*15/100 + (20000 + 30000);
	}
	else if(income>1200000 && income<= 1500000){
		 tax = (income - 1200000) * 20/100 +(20000 + 30000 + 30000);
	}
	else if(income>1500000){
		 tax = (income - 1500000) * 30/100 + (20000 + 30000 + 30000 + 60000);
	}
	else{

		printf("Something went wrong. Try again");
		
	}
	
	if(gender == 'f' || gender == 'F'){
		exempt += 5;
	}
	if(age>59){
		exempt += 10;
	}
	
	final_tax = tax-(tax*exempt/100);
	final_income = income-final_tax;
	
	printf("\nYou are levied a total tax of %f. You are given an exemption of %f% \nFinal tax = %f\nFinal income in hand = %f\n", tax,exempt,final_tax, final_income);	
}

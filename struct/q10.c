/* Q10: Implement the Q5, by using dynamic memory allocation for data members “name” and
“city”.

Hint: pointers will be used in data members for name and city. */

#include <stdio.h>
#include <stdlib.h>

typedef struct some_struct{

	char *name_ptr;
	int age;
	char gender;
	char *city_ptr;
	int pincode;
	char marital;
	long salary;
} form_t;

int main(){
	
	form_t info;
	
	info.name_ptr = (char*)malloc(sizeof(char)*20);
	info.city_ptr = (char*)malloc(sizeof(char)*20);
	
	printf("Hey! what's your name?\n");
	scanf("%[^\n]s", (info.name_ptr));
	printf("Please enter your age\n");
	scanf("%d", &info.age);
	printf("Enter your gender\n");
	getchar();
	scanf("%c", &info.gender);
	printf("Which city do you live in?\n");
	getchar();
	scanf("%[^\n]s", (info.city_ptr));
	printf("Enter your area pin code\n");
	scanf("%d", &info.pincode);
	printf("May we know your marital status?\n");
	getchar();
	scanf("%c", &info.marital);
	printf("Finally whats your annual salary like?\n");
	scanf("%ld", &info.salary);
	
	
	printf("\n\nYour details were recorded. Please verify\n");
	printf("Name: %s\nAge: %d\nGender: %c\nCity: %s\nPincode: %d\nMarital Status: %c\nAnnual Salary: %ld\n", (info.name_ptr), info.age, info.gender, (info.city_ptr), info.pincode, info.marital, info.salary);
	
	free(info.name_ptr);
	free(info.city_ptr);
	
}
	

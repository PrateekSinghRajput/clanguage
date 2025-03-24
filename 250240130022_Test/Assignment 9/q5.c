/* Q5: Write a C program to create a registration form for the user, the form should ask the
followingdetails:
Name: Age: Gender: City: PinCode:
Marital Status: Annual Salary:
Once input is received, display the data to the user. */

#include <stdio.h>

typedef struct some_struct{

	char name[20];
	int age;
	char gender;
	char city[20];
	int pincode;
	char marital;
	long salary;
} form_t;

int main(){
	
	form_t info;
	
	printf("Hey! what's your name?\n");
	scanf("%[^\n]s", info.name);
	printf("Please enter your age\n");
	scanf("%d", &info.age);
	printf("Enter your gender\n");
	getchar();
	scanf("%c", &info.gender);
	printf("Which city do you live in?\n");
	getchar();
	scanf("%[^\n]s", info.city);
	printf("Enter your area pin code\n");
	scanf("%d", &info.pincode);
	printf("May we know your marital status?\n");
	getchar();
	scanf("%c", &info.marital);
	printf("Finally whats your annual salary like?\n");
	scanf("%ld", &info.salary);
	
	
	printf("\n\nYour details were recorded. Please verify\n");
	printf("Name: %s\nAge: %d\nGender: %c\nCity: %s\nPincode: %d\nMarital Status: %c\nAnnual Salary: %ld\n", info.name, info.age, info.gender, info.city, info.pincode, info.marital, info.salary);
}
	

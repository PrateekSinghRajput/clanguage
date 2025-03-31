/* Implement Q5 with data of n number of student (based on user input) and display the data at
the end. */

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

form_t input();
void output(form_t);

int main(){
	
	int n;
	printf("How many students' data do you need?\n");
	scanf("%d", &n);
	form_t arr[n];
	
	for(int i=0; i<n; i++){
	
		arr[i] = input();
	}
	
	for(int i=0; i<n; i++){
	
		output(arr[i]);
	}
}

form_t input(){
	
	form_t info;
	
	static int cnt = 0;
	cnt++;
	
	printf("\nStudent %d input=========================================>\n\n", cnt);
	
	printf("Student's name:\n");
	getchar();
	scanf("%[^\n]s", info.name);
	printf("Student's age:\n");
	scanf("%d", &info.age);
	printf("Student's gender:\n");
	getchar();
	scanf("%c", &info.gender);
	printf("Student's city:\n");
	getchar();
	scanf("%[^\n]s", info.city);
	printf("Student's pin code:\n");
	scanf("%d", &info.pincode);
	printf("Student's marital status:\n");
	getchar();
	scanf("%c", &info.marital);
	printf("Student's annual salary:\n");
	scanf("%ld", &info.salary);
	
	return info;
}

void output(form_t info){

	static int cnt = 0;
	cnt++;
	
	printf("\nStudent %d output=========================================>\n\n", cnt);
	
	printf("Name: %s\nAge: %d\nGender: %c\nCity: %s\nPincode: %d\nMarital Status: %c\nAnnual Salary: %ld\n", info.name, info.age, info.gender, info.city, info.pincode, info.marital, info.salary);
	
}

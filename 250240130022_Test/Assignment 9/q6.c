/* Q6: Implement the question 5 with an added feature, wherein at the end, user should be given an
option to verify the data, in-case user wishes to modify the entered data. If user wishes to
modify the data it has entered, new modified data should be displayed as output when
program ends. */

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

void modify(form_t*);
void print_data(form_t*);

int main(){
	
	form_t info;
	form_t *ptr = &info;
	char choice;
	
	while(1){
		
	
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
		
		
		print_data(ptr);
		printf("Do you wish to modify the details? y/n\n");
		
		getchar();
		scanf("%c", &choice);
		if(choice=='Y' || choice=='y'){
			modify(ptr);
			print_data(ptr);
			
		}
		if(choice=='N' || choice=='n'){
			printf("Thanks for your time\n");
			return 0;
		}
	
	}
}


void modify(form_t* ptr){
	int ch;
	printf("Which information would you like to modify?\n1. Age\n2. City\n3. Pin code\n4. Marital status\n5. Annual salary\n6. Exit\n");
	scanf("%d", &ch);
	
	switch(ch){
	
		case 1:
			printf("Please enter your age\n");
			scanf("%d", &ptr->age);
			break;
		case 2:
			printf("Which city do you live in?\n");
			getchar();
			scanf("%[^\n]s", ptr->city);
			break;
		case 3:
			printf("Enter your area pin code\n");
			scanf("%d", &ptr->pincode);
			break;
		case 4:
			printf("May we know your marital status?\n");
			getchar();
			scanf("%c", &ptr->marital);
			break;
		case 5:
			printf("Finally whats your annual salary like?\n");
			scanf("%ld", &ptr->salary);
			break;
		case 6:
			break;
	}
				
}

void print_data(form_t* ptr){
	printf("\n\nYour details were recorded. Please verify\n");
	printf("Name: %s\nAge: %d\nGender: %c\nCity: %s\nPincode: %d\nMarital Status: %c\nAnnual Salary: %ld\n", ptr->name, ptr->age, ptr->gender, ptr->city, ptr->pincode, ptr->marital, ptr->salary);
}

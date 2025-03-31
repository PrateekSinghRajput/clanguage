/* Q13: Create an employee structure with the following members
empid, employee name, salary, year of joining, gender, age, ID proofs (Adhar, Passport,
Voter ID (any1)) (hint: use union for ID proof)
Note: Range of empid is 0 –1000
Range of age is 18 - 65
Implement bit-fields, unions, typedef wherever possible
Accept the data for certain no. of employees (Using array of structures) and find their total,
average, max, min salary. Also find out the employees with maximum, minimum service,
use a function to find service for each employee element in the array.
Year of service is the number of years a given person has worked from joining year to
current year. */

#include <stdio.h>

// !!! Remember to declare bit fields as unsigned or larger numbers may get stored as negative numbers (2's compliment) !!!
typedef struct employee{
	unsigned int age : 7;		// given age range 18-65 can be fit into 6 bits by introducing an offset of more than 2 
				// take care when retrieving stored age value and dont forget to add the offset back
	char gender;
	unsigned int empid : 10;		// 0-1024 allowed
	unsigned int joining : 11;	// cant be greater than 2048
	char name[20];
	int salary;
	
	union{
		int aadhar;
		int passport;
		int voter_id;
	} gov_id;
} emp_t;


void salary_func(emp_t arr[], int n);
void service(emp_t arr[], int n, int year);
int search(emp_t arr[], int n);
int main(){

	int current_year = 2025;
	//int age_offset = 18;
	int n, ch, temp;
	
	printf("How many employees' data do you want to record?\n");
	scanf("%d", &n);
	emp_t arr[n];
	
	
	
	for(int i=0; i<n; i++){
		printf("Input for employee %d =====================================>\n", i+1);
		
		printf("Name of the employee:\n");
		getchar();				//flushing buffer to rectify missed inputs
		scanf("%[^\n]s", arr[i].name);
		
		printf("Employee id:\n");
		getchar();
		scanf("%d", &temp);
		arr[i].empid = temp;
		
		printf("Age of the employee:\n");
		getchar();
		scanf("%d", &temp);
		arr[i].age = temp;
		
		printf("Gender of the employee:\n");
		getchar();
		scanf("%c", &(arr[i].gender));
		
		printf("Joining year of the employee:\n");
		getchar();
		scanf("%d", &temp);
		arr[i].joining = temp;
		
		printf("Salary of the employee:\n");
		getchar();
		scanf("%d", &(arr[i].salary));
		
		printf("You must enter one of the following govt id for the employee. Please choose from the following and enter:\n");
		printf("1. Aadhar card number\n2. Passport number\n3. Voter id number\n\nEnter your choice:\n");
		scanf("%d", &ch);
		switch(ch){
			case 1:
				printf("Enter your Aadhar card number\n");
				scanf("%d", &(arr[i].gov_id.aadhar));
				break;
			case 2:
				printf("Enter your Passport number\n");
				scanf("%d", &(arr[i].gov_id.passport));
				break;
			case 3:
				printf("Enter your Voter id number\n");
				scanf("%d", &(arr[i].gov_id.voter_id));
				break;
		}
	}
	

	printf("\n===================================================================\n");
	salary_func(arr, n);
	service(arr, n, current_year);
	search(arr, n);
}

void salary_func(emp_t arr[], int n){
	int total = 0, min = arr[0].salary, max = arr[0].salary; 
	
	for(int i=0; i<n; i++){
		total+=arr[i].salary;
		
		if(arr[i].salary<min){
			min = arr[i].salary;
		}
		if(arr[i].salary>max){
			max = arr[i].salary;
		}
	}
	
	printf("\nTotal salary of all employees = %d\nAverage salary = %d\nMinimum salary = %d\nMaximum salary = %d\n", total, (total/n), min, max);
	
}

void service(emp_t arr[], int n, int year){

	int min = arr[0].joining, max = arr[0].joining, min_i=0, max_i=0; 
	
	for(int i=0; i<n; i++){
		if((arr[i].joining)<min){
			min = arr[i].joining;
			min_i = i;
		}
		
		if((arr[i].joining)>max){
			max = arr[i].joining;
			max_i = i;
		}
	}
	
	
	printf("Employee %s has served for the longest time, for %d years. Joined in %d\n", arr[min_i].name, (year - arr[min_i].joining), arr[min_i].joining);
	
	printf("Employee %s has served for the least time, for %d years. Joined in %d\n", arr[max_i].name, (year - arr[max_i].joining), arr[max_i].joining);
	
	
}

int search(emp_t arr[], int n){

	int i, search;
	
	printf("Enter employee id to search details: ");
	scanf("%d", &search);
	
	for(i=0; i<n; i++){
	
		if(arr[i].empid == search){
			printf("Match Found!\n");
			printf("Name: %s\nAge: %d\nGender: %c\nYear of joining: %d\nSalary: %d\nGovt id: %d\n", arr[i].name, arr[i].age, arr[i].gender, arr[i].joining, arr[i].salary, arr[i].gov_id.aadhar);
			return 0;
		}
	}
	
	printf("No employee found\n");
	return 0;
}


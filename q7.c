#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100
#define MAX_NAME_LENGTH 50
#define MAX_ID_LENGTH 20

typedef struct {
    char name[MAX_NAME_LENGTH];
    int age;
    char class[10];
    char studentID[MAX_ID_LENGTH];
    char aadhaar[MAX_ID_LENGTH];
} Student;

Student students[MAX_STUDENTS];
int studentCount = 0;

void addStudent();
void findStudent();
void modifyStudent();
void displayAllStudents();
int isIDExists(const char *id);
void clearInputBuffer();
void getStringInput(char dest[], int max_len, const char prompt[]);

int main() {
    int choice;
    
    printf("School Portal System\n");
    printf("-------------------\n");
    
    do {
        printf("\nMenu:\n");
        printf("1. Add Student\n");
        printf("2. Find Student\n");
        printf("3. Modify Student\n");
        printf("4. Display All Students\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        clearInputBuffer();
        
        switch(choice) {
            case 1:
                addStudent();
                break;
            case 2:
                findStudent();
                break;
            case 3:
                modifyStudent();
                break;
            case 4:
                displayAllStudents();
                break;
            case 5:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while(choice != 5);
    
    return 0;
}

void getStringInput(char dest[], int max_len, const char prompt[]) {
    char temp[100]; // Temporary buffer larger than needed
    printf("%s", prompt);
    scanf("%[^\n]", temp);
    clearInputBuffer();
    
    // Copy only up to max_len-1 characters
    strncpy(dest, temp, max_len-1);
    dest[max_len-1] = '\0'; // Ensure null-termination
}

void addStudent() {
    if(studentCount >= MAX_STUDENTS) {
        printf("Maximum student capacity reached!\n");
        return;
    }
    
    Student newStudent;
    printf("\nEnter student details:\n");
    getStringInput(newStudent.name, MAX_NAME_LENGTH, "Name: ");
    printf("Age: ");
    scanf("%d", &newStudent.age);
    clearInputBuffer();
    getStringInput(newStudent.class, 10, "Class: ");
    
    do {
        getStringInput(newStudent.studentID, MAX_ID_LENGTH, "Student ID: ");
        
        if(isIDExists(newStudent.studentID)) {
            printf("Error: Student with this ID already exists. Please enter a different ID.\n");
        }
    } while(isIDExists(newStudent.studentID));
    getStringInput(newStudent.aadhaar, MAX_ID_LENGTH, "Aadhaar Number: ");
    students[studentCount] = newStudent;
    studentCount++;
    printf("\nStudent added successfully!\n");
}

void findStudent() {
    if(studentCount == 0) {
        printf("No students in the database.\n");
        return;
    }
    
    char searchID[MAX_ID_LENGTH];
    getStringInput(searchID, MAX_ID_LENGTH, "\nEnter Student ID to search: ");
    
    int found = 0;
    for(int i = 0; i < studentCount; i++) {
        if(strcmp(students[i].studentID, searchID) == 0) {
            printf("\nStudent Found:\n");
            printf("Name: %s\n", students[i].name);
            printf("Age: %d\n", students[i].age);
            printf("Class: %s\n", students[i].class);
            printf("Student ID: %s\n", students[i].studentID);
            printf("Aadhaar Number: %s\n", students[i].aadhaar);
            found = 1;
            break;
        }
    }
    
    if(!found) {
        printf("Student with ID %s not found.\n", searchID);
    }
}

void modifyStudent() {
    if(studentCount == 0) {
        printf("No students in the database.\n");
        return;
    }
    char searchID[MAX_ID_LENGTH];
    getStringInput(searchID, MAX_ID_LENGTH, "\nEnter Student ID to modify: ");
    
    int foundIndex = -1;
    for(int i = 0; i < studentCount; i++) {
        if(strcmp(students[i].studentID, searchID) == 0) {
            foundIndex = i;
            break;
        }
    }
    
    if(foundIndex == -1) {
        printf("Student with ID %s not found.\n", searchID);
        return;
    }
    printf("\nCurrent student information:\n");
    printf("1. Name: %s\n", students[foundIndex].name);
    printf("3. Age: %d\n", students[foundIndex].age);
    printf("4. Class: %s\n", students[foundIndex].class);
    printf("5. Student ID: %s\n", students[foundIndex].studentID);
    printf("6. Aadhaar Number: %s (cannot be modified)\n", students[foundIndex].aadhaar);
    printf("\nEnter field number to modify (1-5, 0 to cancel): ");
    int choice;
    scanf("%d", &choice);
    clearInputBuffer();
    
    if(choice == 0) {
        printf("Modification cancelled.\n");
        return;
    }
    
    switch(choice) {
        case 1:
            getStringInput(students[foundIndex].name, MAX_NAME_LENGTH, "Enter new Name: ");
            break;
        case 3:
            printf("Enter new Age: ");
            scanf("%d", &students[foundIndex].age);
            clearInputBuffer();
            break;
        case 4:
            getStringInput(students[foundIndex].class, 10, "Enter new Class: ");
            break;
        case 5:
            do {
                getStringInput(students[foundIndex].studentID, MAX_ID_LENGTH, "Enter new Student ID: ");
                
                if(isIDExists(students[foundIndex].studentID)) {
                    printf("Error: Student with this ID already exists. Please enter a different ID.\n");
                }
            } while(isIDExists(students[foundIndex].studentID));
            break;
        default:
            printf("Invalid field number.\n");
            return;
    }
    
    printf("Student information updated successfully!\n");
}

void displayAllStudents() {
    if(studentCount == 0) {
        printf("No students in the database.\n");
        return;
    }
    
    printf("\nAll Students Information:\n");
    printf("-------------------------\n");
    
    for(int i = 0; i < studentCount; i++) {
        printf("Student #%d:\n", i+1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Class: %s\n", students[i].class);
        printf("Student ID: %s\n", students[i].studentID);
        printf("Aadhaar Number: %s\n", students[i].aadhaar);
        printf("-------------------------\n");
    }
}

int isIDExists(const char *id) {
    for(int i = 0; i < studentCount; i++) {
        if(strcmp(students[i].studentID, id) == 0) {
            return 1;
        }
    }
    return 0;
}

void clearInputBuffer() {
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}

////////////////////////////////////////////////////
////////////////////////////////////////////////////
////////////////////////////////////////////////////
////////////////////////////////////////////////////
//File Handling 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student
{
	char name[20];
	int rollno;
	int marks;

}stu_t;

void add();
void display();
void find();


int main()
{
	stu_t s1[10];
	int ch;
	int i=0;
	
	while(1)
	{
		printf("1.add\n");
		printf("2.display\n");
		printf("3.find\n");
		printf("4.exit\n\n");
		
		printf("choose one operation\n");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1: 
				add();
				break;
				
			case 2:
				display();
				break;
				
			case 3:
				find();
				break;
			
			case 4:
				exit(0);
				break;
			default:
				printf("you choose incorrect number\n\n");
				break;		
		}
	}
}
void add()
{
	stu_t s1[10];
	int i,temp;	
	FILE *fp=fopen("students.txt","a+");
	
	if(fp==NULL)
	{
		printf("error in file opening\n");
		return;
	}
	int count=0;
	
	while(fscanf(fp,"%s %d %d",s1[count].name,&s1[count].rollno,&s1[count].marks)!=EOF)
	{	
		count++;
	}
	
	printf("enter the roll number\n");
	scanf("%d",&temp);
	
	for(i=0;i<count;i++)
	{
		if(s1[i].rollno==temp)
		{
			printf("student have already enrolled\n");
			return;
		}
	
	}
	printf("enter the student name\n");
	getchar();
	scanf("%[^\n]s",s1[count+1].name);
	
	printf("enter the marks\n");
	scanf("%d",&s1[count+1].marks);
	
	s1[count+1].rollno=temp;
	
	fprintf(fp,"%s %d %d\n",s1[count+1].name,s1[count+1].rollno,s1[count+1].marks);
	fclose(fp);
	

}

void display()
{
	stu_t arr[10];
	
	FILE *fp=fopen("students.txt","r");
	
	if(fp==NULL)
	{
		printf("error in file opening\n");
		return;
	}

	int count=0;
	
	while(fscanf(fp,"%s %d %d",arr[count].name,&arr[count].rollno,&arr[count].marks)!=EOF)
	{	
		count++;
	}
	
	if(count==0)
		printf("no data found\n");
		
	else
	{
		for(int i=0;i<count;i++)
		{
			printf("______________________________________________________________\n");
			printf("NAME	  : %s\n",arr[i].name);
			printf("ROLL NO   : %d\n",arr[i].rollno);
			printf("MARKS 	  : %d\n\n",arr[i].marks);	
		}
	}
		fclose(fp);
}
void find()
{
	stu_t arr[10];
	int temp,j;
	printf("enter the rollno\n");
	scanf("%d",&temp);
	FILE *fp=fopen("students.txt","r+");
	if(fp==NULL)
	{
		printf("error in file opening\n");
		return;
	}
	int count=0;
	while(fscanf(fp,"%s %d %d",arr[count].name,&arr[count].rollno,&arr[count].marks)!=EOF){
		count++;
	}
	int found=0;
	for(j=0;j<count;j++)
	{
		if(arr[j].rollno==temp)
		{	
			printf("______________________________________________________________\n");
			printf("NAME	  : %s\n",arr[j].name);
			printf("ROLL NO   : %d\n",arr[j].rollno);
			printf("MARKS 	  : %d\n",arr[j].marks);
			found=1;
			break;
		}
		if(!found)
		{
			printf("you was entered wrong roll number\n");
		}
		
	}
	fclose(fp);
}



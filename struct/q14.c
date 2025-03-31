/* Q14:
Create a structure for student information with suitable members and do thefollowing
- Creating variables, input, output operations
- initialization (complete or partial) of variables
- create a pointer of struct type, and assign address of variable
- access members from the pointer using arrow operator
- calculate size of variable, offset of each member
- create alias for the structure type, pointer type using typedef */

#include <stdio.h>
#include <stddef.h>

typedef struct students{

	char name[20];
	int age;
	
} stud_t;

int main(){

	stud_t s1;
	stud_t *ptr = &s1;
	printf("Enter name\n");
	scanf("%[^\n]s", s1.name);  
	
	printf("Enter age\n");
	scanf("%d", &ptr->age);
	
	printf("Entered name and age is:\n%s\t%d\n", ptr->name, ptr->age);
	
	printf("Size of entire structure: %ld\n", sizeof(s1));
	
	printf("Size of name: %ld\tOffset of name: %ld\n", sizeof(ptr->name), offsetof(stud_t, name));
	printf("Size of age: %ld\tOffset of age: %ld\n", sizeof(ptr->age), offsetof(stud_t, age));
	
}
	
	
	

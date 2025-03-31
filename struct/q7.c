/* Using function calls, create a structure variable in one function and return the structure
variable to the caller function, where caller can use the data returned by function to display
the output.
Example: main(){

struct data var = function();
----- code to display var data ----
}
struct data function()
{
struct data var1;
--- initialization code ---
return var1;
} */

#include <stdio.h>

typedef struct func{

	int age;
	char name[20];
} func_t;

func_t function();

int main(){

	func_t f = function();
	
	printf("\nName: %s\nAge: %d\n", f.name, f.age);
	
	
	
	

}

func_t function(){
	
	int age;
	char name[20];
	func_t f;
	
	printf("Please enter your name and age separated by space\n");
	scanf("%s %d", name, &age);
	
	for(int i=0; name[i]!='\0'; i++){
		f.name[i] = name[i];
	}
	f.age = age; 
	
	return f;
}

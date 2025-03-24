/* Q9: Write a C program to take input from the user for the first name of user, once
input is taken, check for any unwanted characters in the name (special characters or
numbers) in the name.
Example:
input: cdac output = Name is “cdac”
Input: @cdac12 output = incorrect name, try again,
If incorrect input is there, take the input again till the time, user has entered correct
name as per requirements. */

#include <stdio.h>

int main(){
	char name[100];
	int flag = 0;
	while(1){
	
		printf("Enter your name please\n");
		scanf("%s", name);
		flag = 0;
		
		for(int i=0; name[i]!='\0'; i++){
			if(!((name[i]>='a' && name[i]<='z') || (name[i]>='A' && name[i]<='Z'))){
				flag = 1;
			}
		}
		if(flag==1){
			printf("Incorrect name, try again\n\n");
			continue;
		}
		else{
			break;
		}
		
	}
	printf("\n\nHello %s\n", name);
}

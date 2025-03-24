/* Q8: Write a C program to check the first word of provided string to check whether
the first alphabet is capital or small, in case the first letter is small, then change it to
capital. Also print the new string at the end of program along with the number of
modifications done on the string.
Example: string: “hello Everyone, how are you Doing”
Expected output:
After conversion new string is: “Hello Everyone, How Are You Doing”
Modifications performed: 4 */


#include <stdio.h>

char upper(char, int*);

int main(){

	char ip_str[100] = "hello Everyone, how are you Doing";
	char op_str[100];
	int corrections = 0;
	int *ptr = &corrections;
	int word_flag = 0;
	
	op_str[0] = upper(ip_str[0], ptr);
	

	int i;
	for(i=1; ip_str[i]!='\0'; i++){
	
		
		if(ip_str[i] == ' '){
			word_flag = 1;
			op_str[i] = ip_str[i];
		}
		else if(word_flag == 1){
			op_str[i] = upper(ip_str[i], ptr);
			word_flag = 0;
		}
		else{
			op_str[i] = ip_str[i];
		}
			 
	}
	op_str[i] = '\0';
	printf("After conversion new string is: %s\nModifications performed: %d\n", op_str, *ptr);
}

char upper(char n, int* ptr){

	if(n>='a' && n<='z'){
		n = (char)n - 32;
		(*ptr)++;
		return n;
	}
	
	return n;
}

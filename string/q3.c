/* Q3: Implement your own string comparison function. Which can compare two
strings and tell whether the two strings are same or not.
(man strcmp for reference) */

#include <stdio.h>
#include <assert.h>
#include <errno.h>

int strcmpp(char strd[], char strs[]);
int strlenn(char str[]);
int main(){

	char str1[20]; // source string
	char str2[20]; // destination string
	printf("Enter the two strings separated by space:\n");
	scanf("%s %s", str1, str2);
	
	printf("Difference in string is: %d\n", strcmpp(str1, str2));
}
int strcmpp(char str1[], char str2[]){
	 
	int size_1 = strlenn(str1);
	int size_2 = strlenn(str2);
	
	if(size_1!=size_2){
	
		perror("String sizes must be same");
		assert(1==2); // throw error if string sizes different
	}
	
	for(int i=0; i<size_1; i++){
	
		if(str1[i]==str2[i]){
			continue;
		}
		else if(str1[i]>str2[i]){
			return 1;
		}
		else if(str1[i]<str2[i]){
			return -1;
		}
	}
	return 0;
		
	
}

int strlenn(char str[]){

	int count = 0;
	
	for(int i=0; str[i]!='\0'; i++){
	
		count++;
	}
	
	return count;
}

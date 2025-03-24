#include <stdio.h>
#include<stdlib.h>

int add(int, int);
int sub(int, int);
int mul(int, int);
int divi(int, int);

int main(){
int ch,n1,n2;

	while(1){

		printf("Choose the operation:\n1. Addition\n2. Subtraction\n3. Multiply\n4. Divide\n5. Exit\n");
		scanf("%d", &ch);
		
		if(ch>=1 && ch<=4){
			printf("\nEnter the two numbers\n");
			scanf("%d %d",&n1, &n2);
		}
		
		
		switch(ch){
		
			case 1:
				printf("\nAddition of %d and %d is %d\n", n1, n2, add(n1,n2));
				break;
			case 2:
				printf("\nSubtracting %d from %d gives %d\n", n2, n1, sub(n1,n2));
				break;
			case 3: 
				printf("\nMultiplying %d by %d gives %d\n", n1, n2, mul(n1, n2));
				break;
			case 4:
				printf("\nDividing %d by %d gives %d\n", n1, n2, divi(n1, n2));
				break;
			case 5:
				//return 0;
				exit(0);
			default:
				printf("Oops! Something went wrong. Please Try again");
				//exit(0);
				//return -1;
				break;
				
				
		}



	}
	return 0;
}
int add(int n1, int n2){
	return n1+n2;
}
int sub(int n1, int n2){
	return n1-n2;
}
int mul(int n1, int n2){
	return n1*n2;
}
int divi(int n1, int n2){
	return n1/n2;
}

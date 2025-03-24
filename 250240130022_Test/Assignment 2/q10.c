#include <stdio.h>

int check_prime(int);
int main(){

	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	for(int i=1; i<n; i++){
	
		if(check_prime(i)){
		
			printf("\n%d\n", i);
		}
	}

}

int check_prime(int a){

	for(int i=2; i<a; i++){
		if(a%i==0){
			
			return 0;
		}	
	}
	return 1;
}



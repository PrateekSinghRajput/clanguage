#include <stdio.h>

int main(){

	int n, j=1;
	scanf("%d", &n);
	
	for(int i=1; i<=n; i++){
		for(int sp=n-i-1; sp>=0; sp--){
		
			printf(" ");
		}
		
		for(int k=0; k<j; k++){
		
		printf("%d", i);
		
		}
		j+=2;
		
		
		for(int sp=n-i-1; sp>=0; sp--){
		
			printf(" ");
		}
		printf("\n");
	
	
	}

}

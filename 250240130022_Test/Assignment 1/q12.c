#include <stdio.h>


int main(){

	int n;
	scanf("%d", &n);

	for(int i=1; i<=n; i++){
	
	
	
		for(int sp=n-i; sp>=0; sp--){
		
		
			printf(" ");
		
		}
		
		for(int nums=1; nums<=i; nums++){

			printf("%d", i);
		}
		
		printf("\n");
	}

}

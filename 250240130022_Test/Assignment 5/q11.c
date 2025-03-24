#include <stdio.h>


int main(){

	int n;
	printf("Enter the size to generate identity and null matrix\n");
	scanf("%d", &n);
	
	int id[n][n], nul[n][n];
	
	for(int r=0; r<n; r++){
	
		for(int c = 0; c<n; c++){
		
			id[r][c] = 0;
			nul[r][c] = 0;
		}
		id[r][r] = 1;
	}
	//below code for displaying the matrices
	
	for(int r=0; r<n; r++){
	
		for(int c = 0; c<n; c++){
		
			printf("%d\t", id[r][c]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	for(int r=0; r<n; r++){
	
		for(int c = 0; c<n; c++){
		
			printf("%d\t", nul[r][c]);
		}
		printf("\n");
	}

}



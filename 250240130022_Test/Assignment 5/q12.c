#include <stdio.h>

int check(int arr[3][3], int n);
int main(){

	int n=3;
	//printf("Enter size of your matrix\n");
	int arr[n][n];
	
	printf("Enter values of your matrix\n");
	
	for(int r=0; r<n; r++){
	
		for(int c=0; c<n; c++){
		
			scanf("%d", &arr[r][c]);
		}
	}
	
	if(check(arr, n)){
		printf("Your entered matrix is an identity matrix\n");
	}
	else{
		printf("Your entered matrix is not an identity matrix\n");
	}
	
	
}

int check(int arr[3][3], int n){

	for(int r=0; r<n; r++){
	
		for(int c=0; c<n; c++){
		
			if(c==r){
				if(arr[r][c]!=1){
					return 0;
				}	
			}
			else{
				if(arr[r][c]!=0){
					return 0;
				}
			}
			
		}
	}
	return 1;
}

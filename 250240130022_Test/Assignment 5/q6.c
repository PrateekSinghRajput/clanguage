#include <stdio.h>

//void add(int*, int*, int*);
void add(int arr1[][3], int arr2[][3],int sum [][3]);
void sub(int arr1[][3], int arr2[][3],int diff [][3]);
void mul(int arr1[][3], int arr2[][3],int prod [][3]);
//int* mul(int arr1[], int arr2[]);

int main(){

	int arr1[3][3] = {{1,2,3},
			   {4,5,6},
			   {7,8,15}};
			   
	int (*arr1_ptr)[3][3] = &arr1;
			   
	int arr2[3][3] = {{1,2,3},
			   {4,5,6},
			   {7,8,9}};
			   
	int (*arr2_ptr)[3][3] = &arr2;
			 
	int sum[3][3];
	int diff[3][3];
	int prod[3][3];
	add(arr1, arr2, sum);
	sub(arr1, arr2, diff);
	mul(arr1, arr2, prod);
			
	printf("Addition of matrices:\n");
	for(int row=0; row<3; row++){
	
		for(int col = 0; col<3; col++){
		
			printf("%d\t", sum[row][col]);
		}
		printf("\n");
	}
	
	printf("\n\nSubtraction of matrices:\n");
	
	for(int row=0; row<3; row++){
	
		for(int col = 0; col<3; col++){
		
			printf("%d\t", diff[row][col]);
		}
		printf("\n");
	}
	
	printf("\n\nMultiplication of matrices:\n");
	
	for(int row=0; row<3; row++){
	
		for(int col = 0; col<3; col++){
		
			printf("%d\t", prod[row][col]);
		}
		printf("\n");
	}
}

void add(int arr1_ptr[][3], int arr2_ptr[][3], int sum[3][3]){

	//int sum[3][3];  // local array , local to add fucntiom, does not eixt outsie add function
	//int (*sum_ptr)[3][3] = &sum;
	
	
	for(int row=0; row<3; row++){
	
		for(int col = 0; col<3; col++){
		
			sum[row][col] = arr1_ptr[row][col] + arr2_ptr[row][col]; 
		}
	}
	
}

void sub(int arr1_ptr[][3], int arr2_ptr[][3], int diff[3][3]){

	//int sum[3][3];  // local array , local to add fucntiom, does not eixt outsie add function
	//int (*sum_ptr)[3][3] = &sum;
	
	
	for(int row=0; row<3; row++){
	
		for(int col = 0; col<3; col++){
		
			diff[row][col] = arr1_ptr[row][col] - arr2_ptr[row][col]; 
		}
	}
	
}

void mul(int arr1_ptr[][3], int arr2_ptr[][3], int prod[3][3]){

	//int sum[3][3];  // local array , local to add fucntiom, does not eixt outsie add function
	//int (*sum_ptr)[3][3] = &sum;
	
	
	for (int i = 0; i < 3; i++) {
        	for (int j = 0; j < 3; j++) {
            		prod[i][j] = 0;
        }
    }
    
	
	
	
	for (int i = 0; i < 3; i++) {
        	for (int j = 0; j < 3; j++) {
            		for (int k = 0; k < 3; k++) {
                	prod[i][j] += arr1_ptr[i][k] * arr2_ptr[k][j];
            }
        }
    }
	
}

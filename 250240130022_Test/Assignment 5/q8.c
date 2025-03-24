#include <stdio.h>

int main(){

	//int size = 3;
	int arr1[3][3] = {{1,2,3},
			   {4,5,6},
			   {7,8,9}};
			   
	int trace = 0;
	
	for(int i=0; i<3; i++){
	
		trace+=arr1[i][i];
	}
	
	printf("Trace of the matrix is: %d\n", trace);

}

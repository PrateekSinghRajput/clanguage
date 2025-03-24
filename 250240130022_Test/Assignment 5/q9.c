#include <stdio.h>

int det2x2(int arr2x2[2][2]);
int det3x3(int arr3x3[3][3]);
int main(){

	int arr3x3[3][3] =	{{1,-2,3},
				{2,0,3},
				{1,5,4}};
				
	//int d=arr2x2[0][0]*arr2x2[1][1] - arr2x2[0][1]*arr2x2[1][0];
	printf("%d\n", det3x3(arr3x3));	
	
	
}

int det2x2(int arr2x2[2][2]){
	int res = arr2x2[0][0]*arr2x2[1][1] - arr2x2[0][1]*arr2x2[1][0];
	printf("determinant = %d\n", res);
	return res;
}
int det3x3(int arr3x3[3][3]){
	int arr1[2][2] = {{arr3x3[1][1], arr3x3[1][2]},
			  {arr3x3[2][1], arr3x3[2][2]}};
			  
	int arr2[2][2] = {{arr3x3[1][0], arr3x3[1][2]},
			  {arr3x3[2][0], arr3x3[2][2]}};
	
	int arr3[2][2] = {{arr3x3[1][0], arr3x3[1][1]},
			  {arr3x3[2][0], arr3x3[2][1]}};
			  
	return arr3x3[0][0]*det2x2(arr1) - arr3x3[0][1]*det2x2(arr2) + arr3x3[0][2]*det2x2(arr3);
}

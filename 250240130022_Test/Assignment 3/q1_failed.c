// This is a very time consuming approach is abandoned 

#include <stdio.h>

int pow(int, int);
int calc_digit(int **arr, int row, int col);
int main(){

	int row, col, row_pos=0, col_pos=0;
	printf("Enter the number of rows you want for the pascal triangle: ");
	scanf("%d", &row);
	col = (2*row) + 1;
	row++;
	
	int arr[row][col];
	
	for(int i=0; i<=row; i++){
	
		for(int sp=0; sp<row/(pow(2,i)); sp++){
		
			printf(" ");
			col_pos++;
		} 
		for(int dig = 0; )
	}
	
	

}

int pow(int x, int y){

	int prod = 1;
	if(y==0){
		return 1;
	}
	
	else{
		for(int i=0; i<y; i++){
			prod*=x;
		}
	}
}
int calc_digit(int **arr, int rows, int col, int x, int y){
	 arr[x][y] = arr[x-1][y-1] + arr[x-1][y+2];
	 return arr[x][y]
}

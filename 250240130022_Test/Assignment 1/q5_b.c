#include <stdio.h>

int poww(int x, int y){
	int res = 1;
	for(int i=0; i<y; i++){
		res = res*x;

	}
	return res;

}

int count(int x){

	int dig = 0;
	while(x>=1){
	x=x/10;
	dig++;	 

	}
	return dig;

}

int main(){

	int num, res=0, dig=0, dig_count = 0;
	scanf("%d", &num);
	dig_count = count(num);

	for(int x=0; x<dig_count; x++){

		dig = num/(poww(10,count(num)-1));
		res += dig * poww(10,x);
		num -= dig * poww(10,count(num)-1);	

	}
	//printf("\n%d\n",dig);
	printf("\n%d\n", res);


//printf("\n%d\n", pow(2,3));	
}

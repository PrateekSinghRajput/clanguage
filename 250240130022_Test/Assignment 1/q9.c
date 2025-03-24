#include <stdio.h>

int main(){

printf("How many numbers do you want to enter?\n");
int n, i,sum = 0;
scanf("%d", &n);
//printf("%d", n);

for(i=1; i<=n; i++){
	
	//printf("%d", i);
	sum = sum + i;

}

printf("\nSum: %d\nAverage: %f\n", sum, (float)sum/n);




}

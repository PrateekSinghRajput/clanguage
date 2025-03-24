#include <stdio.h>

int main(){

	int n1, n2, hcf = 0, temp, lcm = 1;
	printf("Enter the numbers\n");
	scanf("%d %d", &n1, &n2);
	//int arr[n];
	if(n2>n1){
		temp = n1;
		n1 = n2;
		n2 = temp;
	}

	for(int i=1; i<=n1; i++){
	
		
		if(n1%i==0 && n2%i==0){
		
			hcf = i;		
		}
	}
	
		
	for(int i=1; i<=n1; i++){
		if(lcm%n1==0 && lcm%n2==0){
			//printf(" \ni=%d lcm=%d break\n",i,lcm);
			break;
		}
		if(n1%i==0 && n2%i==0){
		
			lcm *= i;
			//printf("\n common i=%d lcm=%d\n",i,lcm);		
		}
		else{
			if(n1%i==0 || n2%i==0){
				lcm *= i;
				//printf("\n uncommon i=%d lcm=%d\n",i,lcm);
			}
		}
	
	}
	
	
	//lcm = n1*n2/hcf;
	printf("HCF is %d\n", hcf);
	printf("LCM is %d\n", lcm);



}

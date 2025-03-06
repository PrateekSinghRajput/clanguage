#include <stdio.h>

int prime(int n){
if (n<2)
 
return 0;

for(int i=2; i*i<=n; i++)

if(n%i == 0) 

return 0;

return 1;

}

int main(){

int num;
printf("Enter a Number:  ");
scanf("%d", &num);

if(prime(num))
printf("%d is prime number.\n", num);

else
printf("%d  is not prime number.\n", num);
}


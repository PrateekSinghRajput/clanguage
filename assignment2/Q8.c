#include <stdio.h>

int inperfect(int num){

int sum= 0;

for(int i=1; i<= num/2; i++)
if (num % i ==0) sum += i;
 
 return sum == num;
 
 
}

int main(){
int num;

printf("Enter a Number:   ");
scanf("%d", &num);
printf("%d is %s\n", num ,inperfect(num) ? "Perfect Number" : "Not Perfect Number");

return 0;

}




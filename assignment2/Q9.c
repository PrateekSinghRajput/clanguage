#include <stdio.h>


int digits(int num){
if(num< 10) return num;
return digits(num / 10  + num % 10);

}


int main(){

int num;
printf("Enter a number:");
scanf("%d",&num);

printf("Recursive Number:  %d\n",digits(num));
return 0;

}

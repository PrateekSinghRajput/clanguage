#include <stdio.h>


int main(){

int num, ones, tens, hunds, result;
scanf("%d", &num);

ones = num%10;
tens = (num/10)%10;
hunds = num/100;
result = 100*ones + 10*tens + hunds;

printf("%d\n", result);

return 0;

}

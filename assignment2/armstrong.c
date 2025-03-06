#include <stdio.h>
#include <math.h>

int main(){
int num, onum, rnum, n=0 ;
double result=0.00;

printf("Enter a number:");
scanf("%d",&num);

onum = num ;
while(onum != 0){
onum/=10;
++n;
}


onum = num ;

while(onum != 0){
rnum= onum%10;
result += pow(rnum,n);
onum/=10;
}

if((int)result == num)
printf("%d is an Armstrong number:",num);
else
printf("%d is not Armstrong number:",num);

return 0;
}

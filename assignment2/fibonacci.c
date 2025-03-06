#include <stdio.h>

int main(){

int num, n, term1=0 , term2=1 ;

printf("Enter a number of terms:");
scanf("%d",&n);

int addterm = term1+term2;
printf("Fabonacci Series is:%d,%d,",term1,term2);

for(num=3;num<=n;++num){
printf("%d,",addterm);
term1=term2;
term2=addterm;
addterm = term1+term2;
}
return 0;
}

#include <stdio.h>

int gcd(int a, int b){
while(b!=0){
int temp =b;
b= a%b;
a=temp;
}
return a;
}

int lcm(int a, int b){
return(a*b)/gcd(a,b);
}



int main() {
int a,b;

printf("Enter two Number:   ");
scanf("%d %d", &a,&b);
printf("GCD: %d\n", gcd(a,b));
printf("LCM: %d\n", lcm(a,b));
return 0;

}

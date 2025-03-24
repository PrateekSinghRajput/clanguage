#include <stdio.h>

int main(){
printf("Enter the number for the factorial:\n");
int f;
scanf("%d", &f);
int fact = 1;

for(int i = f; i>0; i--){

	fact = fact*i;
}

printf("\n%d! = %d\n", f, fact);
}

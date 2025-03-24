#include <stdio.h>

int main(){

int x,y;
scanf("%d %d", &x, &y);
//printf("%d %d", x, y);
x = x-y;

y = x+y;
x = y-x;

printf("\nThe swapped numbers are %d and %d\n", x, y);
return 0;

}

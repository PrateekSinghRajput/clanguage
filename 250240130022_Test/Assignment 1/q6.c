#include <stdio.h>

int main(){

int x,y,z, b;

scanf("%d %d %d", &x, &y, &z);

if(x>y){
b = x;
	if(z>x){
	b = z;
	}

}
else if(y>z){
b = y;
	
}
else{
b = z;
}


printf("Biggest number:\n %d\n", b);
}

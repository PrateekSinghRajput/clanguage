#include <stdio.h>

int add(int, int);
void test(int, int, int (*fp)(int, int));

int main(){

	int (*fp)(int, int) = add;
	test(2,3, fp);

}

int add(int x, int y){
	return x+y;
}

void test(int x, int y, int (*fp)(int, int)){

	printf("\n%d\n", fp(x,y));

}

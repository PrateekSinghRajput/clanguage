/* Using array of structure and loops, write a C program to store radius and area of 10 circles,take
user input to initialize the circles, (make sure that user can see that for which circle he’s entering the
data), at the end display the area of all the circles. */

#include <stdio.h>
#include <math.h>

typedef struct circles{

	int radius;
	float area;
} cir_t;

cir_t input();
void output(cir_t);

int main(){

	cir_t arr[10];
	
	for(int i=0; i<10; i++){
		arr[i] = input();
	}
	
	
	for(int i=0; i<10; i++){
		output(arr[i]);
	}
	
}


cir_t input(){

	static int n = 0;
	n++;
	cir_t c;
	printf("Enter radius of circle %d:\n", n);
	scanf("%d", &c.radius);
	c.area = M_PI*c.radius*c.radius;
	
	return c;
}

void output(cir_t c){
	static int n = 0;
	n++;
	printf("Area of circle %d is %.3f\n", n, c.area);
}


/* Q4: Using structures in C, write a program to find the area of a given rectangle, and store the
dimensions and result in the structure data member. Make sure to use another function for
the calculation of area (passing structure variable to a function). */

#include <stdio.h>

typedef struct rectangle{
	int length;
	int width;
	int area;
} rect_t;

void area(rect_t*);

int main(){

	rect_t shape;
	rect_t *ptr = &shape;
	
	printf("Enter length and width of the rectangle separated by space\n");
	scanf("%d %d", &shape.length, &shape.width);
	area(ptr);
	
	printf("Area is %d\n", shape.area);
	
}

void area(rect_t *ptr){

	ptr->area = ptr->length * ptr->width;
}


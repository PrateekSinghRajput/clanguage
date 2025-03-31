/* Using structure, write a C program to find the area of a given rectangle. Store the
dimensions of rectangle and calculated area in the structure itself. (User Input); */

#include <stdio.h>

typedef struct rectangle{
	int length;
	int width;
	int area;
} rect_t;

int main(){

	rect_t shape;
	
	printf("Enter length and width of the rectangle separated by space\n");
	scanf("%d %d", &shape.length, &shape.width);
	shape.area = shape.length * shape.width;
	
	printf("Area of rectangle is %d\n", shape.area);

}

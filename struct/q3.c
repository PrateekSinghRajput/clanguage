/* Q3: Using array of structure, write a C program to find the area of 3 rectangles. Store the
dimensions of rectangle and calculated area in the structure itself. (User Input); */

#include <stdio.h>

typedef struct shape{

	int l; //length
	int w; // width
	int area;
} rect_t;

int main(){

	rect_t rectangles[3];
	
	printf("Enter length and width for 3 rectangles\n");
	
	for(int i=0; i<3; i++){
	
		scanf("%d %d", &rectangles[i].l, &rectangles[i].w);
	}
	
	for(int i=0; i<3; i++){
	
		rectangles[i].area = rectangles[i].l * rectangles[i].w;
		printf("\nArea of rectangle %d is %d\n", i, rectangles[i].area);
	}

}

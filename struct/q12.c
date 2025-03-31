/* Given the address of a member variable in a structure find the base address of it.
For eg:- struct A {
int x;
double y;
float z;
char ch;
} a1;
given address of any member x, y, z or ch , find address(base) of a1.
How will you do that, try finding the address of a1. Print to verify the same. */

#include <stdio.h>
#include <stddef.h>

struct A {
int x;
double y;
float z;
char ch;
} a1; // 17

int main(){

		
	void *base = ((char*)&(a1.z))-offsetof(struct A, z);
	printf("offset of z: %ld\n", offsetof(struct A, z));
	printf("Base address: %p\nCalculated base address: %p\n", &a1, base);
	
}

#include<stdio.h>
int main()
{
char a;
int b;
float c;
double d;
short int e;
long int f;
long long g;

	printf("Displaying size of data types");
	printf("Character:%lu\n",sizeof(a));
	printf("Integer:%lu\n",sizeof(b));
	printf("Float:%lu\n",sizeof(c));
	printf("double:%lu\n",sizeof(d));
	printf("short integer:%lu\n",sizeof(e));
	printf("long integer:%lu\n",sizeof(f));
	printf("long long integer:%lu\n",sizeof(g));
	return 0;
	
}

#include<stdio.h>
int main(){


int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,11}};

int(*p)[4];
p=arr;
int i,j;

printf("size of p=%ld\n",sizeof(p));
printf("size of *p=%ld\n",sizeof(*p));  //pointer is pointing to the row,1 row =4 elements ..4x4=16..size of *p=16

printf("sizw of **p=%ld\n",sizeof(**p));

printf("value of p=%d\n",**p);
printf("value of p+1=%d\n",**(p+1));


for( i=0;i<3;i++)
	for( j=0;j<3;j++)
		printf("%d ",arr[i][j]);



printf("\n");
for( i=0;i<3;i++)
	for( j=0;j<3;j++)
		printf("%d ",(*(p+i))[j]);

		


printf("\n");
for( i=0;i<3;i++)
	for(j=0;j<3;j++)
		printf("%d ",*(*(p+i)+j));


printf("\n");
}

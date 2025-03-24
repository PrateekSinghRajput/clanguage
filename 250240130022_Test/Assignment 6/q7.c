#include<stdio.h>
int main(){

	int arr[5]={10,20,30,40,50};
	int (*parr)[5];
	parr=&arr;
	int i;

	printf("size of (parr)=%ld\n",sizeof(parr));
	printf("size of(*parr)=%ld\n",sizeof(*parr));
	printf("size of (**parr)=%ld\n",sizeof(**parr));
	printf("%d\n",**parr);

	for(i=0;i<5;i++)
		printf("%d",(*parr)[i]);

//	for(i=0;i<5;i++)
//		scanf("%d",(*parr+i));               how to use scanf using pointer

}

#include<stdio.h>
int check(int,int[]);
int main(){

int arr[10],n;

printf("enter the number\n");

for(int i=0;i<10;i++){

	scanf("%d",&arr[i]);

}
  printf("Array Initialized...\n");
         printf("Enter the element to check in array...\n");
         scanf("%d",&n);
         int res= check(n,arr);
         if(res>=0){
         
         	printf("%d is present at %d index in array\n",n,res);
         }
         else{
         	printf("%d was not found in the array\n", n);
         	return -1;
         }
	 
         return 0;
}
int check(int n,int arr[])
{
 
        for(int i=0;i<10;i++)
        {
                 if(n==arr[i])
                         return i;
	}
	
	return -1;
}

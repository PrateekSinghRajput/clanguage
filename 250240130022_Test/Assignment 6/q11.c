#include<stdio.h>
int main(){

int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

printf("the last element of array is %d\n",*(**(&arr+1)-1));

}

#include<stdio.h>

int main(void)
{
    // <data type> <name of array>[<no of row>][<no of col>];
    int arr[3][4] = {1, 2, 3, 4, 10, 20, 30, 40, 11, 22, 33, 44};
    /*
    int arr[3][4] = {{1, 2, 3, 4}, {10, 20, 30, 40}, {11, 22, 33, 44}};
    int arr[3][4] = {1, 2, 3, 4, 10, 20, 30, 40};
    int arr[3][4] = {{1, 2, 3}, {10, 20}, {11, 22, 33, 44}};
    int arr[][4] = {1, 2, 3, 4, 10, 20, 30, 40, 11, 22, 33, 44};
    int arr[][4] = {1, 2, 3, 4, 10, 20, 30, 40};
    int arr[][4] = {1, 2, 3, 4, 10, 20, 30, 40, 11, 22};
    */
   // 1st row - 3rd element ==> arr[0][2]
   printf("sizeof(arr) = %d\n", sizeof(arr));       // 48
   printf("sizeof(arr[0]) = %d\n", sizeof(arr[0])); //16
   printf("sizeof(arr[1]) = %d\n", sizeof(arr[1])); // 16
   printf("sizeof(arr[2]) = %d\n", sizeof(arr[2])); //16
   printf("sizeof(arr[0][0] = %d\n", sizeof(arr[0][0]));  //4

    for(int i = 0 ; i < 3 ; i++)
   {
       for(int j = 0 ; j < 4 ; j++)
       {
           printf("Enter arr[%d][%d] : ", i, j);
           scanf("%d", &arr[i][j]);
       }
   }

    printf("arr :: \n");
   for(int i = 0 ; i < 3 ; i++)
   {
       for(int j = 0 ; j < 4 ; j++)
       {
           printf("%-4d [%u] ", arr[i][j], &arr[i][j]);
       }
       printf("\n");
   }

    return 0;
}
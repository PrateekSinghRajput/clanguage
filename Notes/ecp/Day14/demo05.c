#include<stdio.h>

void accept_array(double arr[][3], int row, int col);
void print_array(double arr[][3], int row, int col);

int main(void)
{
    double arr[2][3];

    accept_array(arr, 2, 3);
    print_array(arr, 2, 3);

    return 0;
}

void accept_array(double arr[][3], int row, int col)
{
    for(int i = 0 ; i < row ; i++)
    {
            for(int j = 0 ; j < col ; j++)
            {
                printf("Enter arr[%d][%d] = ", i,j);
                scanf("%d", &arr[i][j]);
            }
    }
}
void print_array(double arr[][3], int row, int col)
{
    printf("Arr : \n");
    for(int i = 0 ; i < row ; i++)
    {
            for(int j = 0 ; j < col ; j++)
            {
                printf("%-4d", arr[i][j]);
            }
            printf("\n");
    }
}
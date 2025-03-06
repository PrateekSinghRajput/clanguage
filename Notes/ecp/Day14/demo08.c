#include<stdio.h>
// int ptr[][4]    ==>    int (*ptr)[4]
void print_array(int (*ptr)[4], int row, int col)
{
    for(int i = 0 ; i < row ; i++)
    {
        for(int j = 0 ; j < col ; j++)
        //printf("%-4d", (*ptr)[j]);
        //printf("%-4d", *((ptr[i]) + j));
        printf("%-4d", *(*(ptr + i) + j));
    }
    for(int i = 0 ; i < row ; i++, ptr++)
    {
        for(int j = 0 ; j < col ; j++)
            printf("%-4d", (*ptr)[j]);
        //printf("%-4d", *((ptr[i]) + j));
        //printf("%-4d", *(*(ptr + i) + j));
    }

}

// int (*ptr)[4]
// int (*ptr)[3]

int main(void)
{
    int arr[3][4] = {{1,2,3,4},{10,20,30,40},{11,22,33,44}};

    int (*ptr)[4] = arr;

/*
    // arr[i][j]  === ptr[i][j]
    ptr[0][0] 
    => *(*(ptr + 0) + 0)  
    => *(*(400 + 0) + 0)   
    => *(*(400) + 0)
    => *(400 + 0)
    => *400
    => 1
    */
    printf("arr = %u\n", arr); 
    printf("arr + 1 = %u\n", arr + 1);

    printf("&arr = %u\n", &arr);
    printf("&arr + 1 = %u\n", &arr + 1);

    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 4 ; j++)
        {
            printf("%-4d", ptr[i][j]);
        }
        printf("\n");
    }

    
    return 0;
}
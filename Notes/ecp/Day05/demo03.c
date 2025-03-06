#include<stdio.h>
// Print following pattern on console
// *
// * *
// * * *
// * * * *
// * * * * *

// rows = 5
// cols = 5
// 1st = 1
// 2nd = 2
// 3rd = 3
// ....
// row number (i) = number if stars


int main(void)
{
    int row;
    int i, j;

    printf("Enter number of rows : ");
    scanf("%d", &row);

    // nested loops
    for( i = 1 ; i <= row ; i++)    //outer loop
    {
        
        for( j = 1 ; j <= i ; j++)  // inner loop
        {
            printf("* ");
        }
        printf("\n");
    }

    // for every iteration of outer loop, 
    // inner loop completes its all iteration
    // row = 3
    //  i   i <= row    j   j <= i
    //  1   T           1   T 
    //                  2   F
    //  2   T           1   T   
    //                  2   T
    //                  3   F
    //  3   T           1   T
    //                  2   T
    //                  3   T
    //                  4   F
    //  4   F

    return 0;
}
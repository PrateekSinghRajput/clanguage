#include<stdio.h>

// bit fields

typedef struct date{
    unsigned int dd:5;                  // 5 bits
    unsigned int mm:4;                  // 4 bits
    unsigned int yyyy:16;               // 16 bits
    //int arr[5]:5;  //not allowed  
}date_t;                                // 25 bits / 8 = 3 byes 1 bit

int main(void)
{
    date_t dt = {28, 3, 2022};

    printf("Today's Date : %u/%u/%u\n", dt.dd, dt.mm, dt.yyyy);

    printf("sizeof(date_t) = %d\n", sizeof(date_t));

    //&dt.dd;   // not allowed 
    int temp;
    printf("Enter dd: ");
    scanf("%d", &temp);

    dt.dd = temp;

    return 0;
}
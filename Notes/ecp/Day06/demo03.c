#include<stdio.h>

enum color {
    BLACK, WHITE=01, RED=2, BLUE, GREEN=6, PINK, VOILET
};

int main(void)
{
    //<data type> <identifier>
    enum color c1, c2, c3;

    printf("BLACK = %d\n", BLACK);
    printf("WHITE = %d\n", WHITE);
    printf("RED = %d\n", RED);
    printf("PINK = %d\n", PINK);
    printf("VOILET = %d\n", VOILET);

    c1 = 10;
    printf("c1= %d\n", c1);
    c2 = VOILET;
    printf("c2= %d\n", c2);
    
    c3 = c1 + c2;
    printf("c3 = %d\n", c3);

    printf("Enter value of c1 : ");
    scanf("%d", &c1);

    printf("c1 = %d\n", c1);

    printf("sizeof(c1) = %d\n", sizeof(c1));
    printf("sizeof(enum color) = %d\n", sizeof(enum color));
    printf("sizeof(int) = %d\n", sizeof(int));
    
    

    return 0;
}
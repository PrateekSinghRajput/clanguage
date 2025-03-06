#include<stdio.h>

int menu_list(void)
{
    int choice;
    printf("0. Exit\n");
    printf("1. Factorial\n");
    printf("2. Power\n");
    printf("3. Division\n");
    printf("Enter your choice :  ");
    scanf("%d", &choice);
    return choice;
}
#include <stdio.h>

void display(char str[], int index)
{
    if (str[index] == '\0')
        return;
    printf("%c", str[index]);
    display(str, index + 1);
}

void reverseDisplay(char str[], int index)
{
    if (str[index] == '\0')
        return;
    reverseDisplay(str, index + 1);
    printf("%c", str[index]);
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    
    printf("\nOriginal string: ");
    display(str, 0);
    
    printf("\nReversed string: ");
    reverseDisplay(str, 0);
    
    return 0;
}

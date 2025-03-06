#include<stdio.h>

int main(void)
{
    char str[20];
    char str1[5];
    char str2[5] = {'D', 'E', 'S', 'D', 'S'};    // '\0' is not added at the end of string
    char str3[5] = {'D', 'E', 'S', 'D', '\0'};
    char str4[5] = "DESD";      // '\0' is added at the end of string
    //'\0' indicates end of string
    
    for(int i = 0 ; i < 5 ; i++)
        printf("%c", str2[i]);
    printf("\n");

    printf("str4 : %s\n", str4);
    printf("str2 : %s\n", str2);

    printf("Enter string : ");
    scanf("%s", str1);

    printf("str1 = %s\n", str1);

    printf("Enter string : ");
    //scanf("%*c%[^\n]s", str);
    scanf("%*c%[^#]s", str);

    printf("str = %s\n", str);

    return 0;
}
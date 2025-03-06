#include<stdio.h>


size_t my_strlen( const char *str );
int my_strcmp( const char *lhs, const char *rhs );
char *my_strcpy( char *dest, const char *src );
char *my_strcat( char *dest, const char *src );
int main(void)
{
    char str1[24];
    char str2[24];

    printf("Enter str1 : ");
    scanf("%s", str1);
    printf("Enter str2 : ");
    scanf("%s", str2);

    //printf("length = %d\n", my_strlen(str1));
    //printf("ret = %d\n", my_strcmp(str1, str2));
    //my_strcpy(str2, str1);
    my_strcat(str1, str2);
    printf("str1 = %s, str2 = %s\n", str1, str2);

    return 0;
}
/*
size_t my_strlen( const char *str )
{
    int count = 0;
    for(int i = 0 ; str[i] != '\0' ; i++)
        count++;
    return count;
}*/

size_t my_strlen( const char *str )
{
    int count = 0;
    for(int i = 0 ; *(str + i) != '\0' ; i++)
        count++;
    return count;
}
int my_strcmp( const char *lhs, const char *rhs )
{      //             "desd"              "dac"
    int i = 0;
    while((*(lhs + i) != '\0') || (*(rhs + i) != '\0'))
    {
        if(*(lhs + i) == *(rhs + i))
            i++;
        else
            return *(lhs + i) - *(rhs + i);
    }
    return 0;
}
char *my_strcpy( char *dest, const char *src )
{
    int i = 0;
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}
char *my_strcat( char *dest, const char *src )
{
    int i, j;
    for(i = 0 ; dest[i] != '\0' ; i++);

    for(j = 0  ; src[j] != '\0' ; j++)
        dest[j + i] = src[j];
    dest[j + i] = '\0';
    return dest;
}
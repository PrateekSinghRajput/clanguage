#include<stdio.h>
#include<string.h>

typedef enum options
{
    EXIT, STRLEN, STRCMP, STRCPY, STRCAT, STRCHR, STRSTR
}opt_t;

opt_t menu_list(void);


int main(void)
{
    opt_t ch;
    size_t len;
    int ret;
    //char str1[24] = {'d', 'e','s','d','\0'};

    //char *str1 = "sunbeamdesd";

    char str1[24];
    char str2[24];

    while((ch = menu_list()) != EXIT)
    {
        if(ch == STRLEN || ch == STRCPY || ch == STRCHR)
        {
            printf("Enter str1 : ");
            scanf("%*c%[^\n]s", str1);
        }
        else
        {
            printf("Enter str1 : ");
            scanf("%*c%[^\n]s", str1);

            printf("Enter str2 : ");
            scanf("%*c%[^\n]s", str2);
        }

        switch(ch)
        {
            case STRLEN:
                // size_t strlen( const char *str );
                // arg1 : starting address of string
                // ret :    length of given string
                /*
                len = strlen("sunbeamdesd");
                printf("length = %d\n", len);
                printf("sizeof(str1) = %d\n", sizeof("sunbeamdesd"));
                */
               
                // strlen - it gives you length excluding  '\0'
                // sizeof - it gives you length including '\0'

                len = strlen(str1);
                printf("length = %d\n", len);
                break;

            case STRCMP:
                //int strcmp( const char *lhs, const char *rhs );
                // arg1 : string 1 (lhs)
                // arg2 : string 2 (rhs)
                // ret : -ve, 0, +ve value
                // -ve --> first string is lesser than second string
                // 0 --> both strings are equal
                // +ve --> first string is greater than second string
                ret = strcmp(str1, str2);
                printf("ret = %d\n", ret);
                if(ret == 0)
                    printf("str1 and str2 are equal\n");
                else if(ret < 0)
                    printf("str1 is less than str2\n");
                else
                    printf("str1 is greater than str2\n");
                break;

            case STRCPY:
                // char *strcpy( char *dest, const char *src );
                // arg1 : destination string
                // arg2 : source string
                // ret : address of destination string
                strcpy(str2, str1);
                printf("str1 = %s, str2 = %s\n", str1, str2);
                break;

            case STRCAT:
                // char *strcat( char *dest, const char *src );
                // arg1 : destination string
                // arg2 : source string
                // ret : address of destination string
                printf("before : str1 = %s, str2 = %s\n", str1, str2);
                strcat(str2, str1);
                printf("after : str1 = %s, str2 = %s\n", str1, str2);
                break;

            case STRCHR:
                {
                // char *strchr( const char *str, int ch );
                // arg1 : string
                // arg2 : character
                // ret : address of first occurenace of character
                char character;
                printf("Enter character : ");
                scanf("%*c%c", &character);

                char *ptr = strchr(str1, character);
                printf("str1 = %u\n", str1);
                printf("ptr = %u\n", ptr);
                printf("*ptr = %c\n", *ptr);
                printf("remaining string = %s\n", ptr);
                break;
                }

            case STRSTR:
                {
                // char *strstr( const char* str, const char* substr );
                // arg1 : string (sentence)
                // arg2 : sub string (word)
                // ret : address of first charcter of found substring 
                char *ptr = strstr(str1, str2);
                printf("str1 = %s\nstr2 = %s\n", str1, str2);
                printf("ptr = %s\n", ptr);
                break;
                }

            default:
                printf("Invalid option\n");
        }
    }
    return 0;
}

opt_t menu_list(void)
{
    opt_t choice;
    printf("0. Exit\n");
    printf("1. strlen\n");
    printf("2. strcmp\n");
    printf("3. strcpy\n");
    printf("4. strcat\n");
    printf("5. strchr\n");
    printf("6. strstr\n");
    printf("Enter your choice :: ");
    scanf("%d", &choice);
    return choice;
}
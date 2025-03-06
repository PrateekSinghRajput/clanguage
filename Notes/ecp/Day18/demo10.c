#include<stdio.h>

// file copy

int main(int agrc, char *argv[])
{
    // source file          --> read data       --> r
    // destination file     --> write data      --> w

    char ch[64];
    //1. open source file in read mode
    FILE *fps = fopen(argv[1], "r");

    //2. open destination file in write mode
    FILE *fpd = fopen(argv[2], "w");

    //3. read one character at a time from source pointer
    while((fgets(ch, sizeof(ch), fps)) != NULL)
        //4. write each character in destination pointer
        fputs(ch, fpd);

    //5. close both the files
    fclose(fps);
    fclose(fpd);

    printf("copied successfully\n");

    return 0;
}
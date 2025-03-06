#include<stdio.h>

// Un formatted input/output
// fgetc/ fputc
// fgets/ fputs

int main(void)
{
    char ch = 0;
    FILE *fpin = fopen("f04in.txt", "r");
    // 1. open file in write mode
    FILE *fp = fopen("f04.txt", "w");
    //  err check

    //printf("Enter characters : ");
    while(ch != EOF)
    {
        // 2. take character from user
        fscanf(fpin, "%c", &ch);
        // 3. write character in file
        fputc(ch, fp);
    }

    //4. close the file stream
    fclose(fp);
    fclose(fpin);

    return 0;
}
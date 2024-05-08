#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    FILE *fp = NULL;
    char str[50] = "yousef eslam";
    int a = 10;
    char ch = 's';

    fp = fopen("abc.txt", "r");
    if (fp == NULL)
    {
        printf("error");
        exit(1);
    }
    while (!feof(fp))
    {
    fgets(str, 40, fp);
    printf("%s", str);
    }
    /*while (!feof(fp))
    {
    ch = fgetc(fp);
    printf("%c", ch);
    }*/
    fclose(fp);
    return 0;
}

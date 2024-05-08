#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    FILE *fp = NULL;
    char str[50] = "yousef eslam";
    int a = 10;
    char ch = 's';

    fp = fopen("abc.txt", "a");
    if (fp == NULL)
    {
        printf("error");
        exit(1);
    }
    printf("enter the string: ");
    gets(str);

    fputs(str, fp);
    fprintf(fp, "\n => %s", str);
    printf("\nsuccessfully appended\n");

    fclose(fp);
    return 0;
}

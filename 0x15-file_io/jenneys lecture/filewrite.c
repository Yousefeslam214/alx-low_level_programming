#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    FILE *fp = NULL;
    char str[50] = "yousef eslam";
    int a = 10;
    char ch = 's';

    fp = fopen("abc.txt", "w");
    if (fp == NULL)
    {
        printf("error");
        exit(1);
    }
    printf("enter the string: ");
    /*gets(ch);
    for (int i = 0; i != strlen(ch); i++)
        fputc(ch[i], fp);*/
    /*fputs(ch[i], fp);*/
    fprintf(fp, "%d %s %c", a ,str,ch);

    fclose(fp);
    return 0;
}

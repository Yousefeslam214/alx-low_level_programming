#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 *
 * @dest: string with concatenation
 *
 * @src: string to be concatenated
 * 
 * @n: int
 * 
 * Return: concatenates of  two string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
//
for(i = 0; i < n && src[i] != '\0'; i++)
	dest[i] = src[i];

printf("%d\n",i);


for ( ; i < n; i++)
	dest[i] = '\0';


return dest;
}

int main(void)
{
	char s1[98];
	char *ptr;
	int i;

	for (i = 0; i < 98 - 2; i++)
	{
		s1[i] = '*';
	}
	s1[i-1] = '#';
	s1[i] = '\0';
	printf("%s\n", s1);
	//ptr = _strncpy(s1, "\0First, solve the problem. Then, write the code\n", 5);
	//ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 5);

	printf("%s\n", s1);
	//printf("%s\n", ptr);
	ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 46);
	printf("\n%s", s1);
	printf("%d\n", s1[50]);

	printf("%s", ptr);
	printf("\n\n%d\n",i);
	ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 90);
	printf("\n%s", s1);
	printf("%d\n", s1[50]);

	printf("%s", ptr);
	printf("\n\n%d\n",i);
	for (i = 0; i < 98; i++)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", s1[i]);
	}
	printf("\n%d\n",i);

	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	

	char yousef[6]={'g','\0','u'};
	putchar(yousef[1]);
	printf("\n%s", yousef[1]);
printf("\n");
	return (0);
}

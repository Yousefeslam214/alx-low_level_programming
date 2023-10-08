#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * malloc_checked - function that allocates
 * memory using malloc.
 *
 * @b: int.
 * Return: int.
 * 	//unsigned int len2 = sizeof(*s2)/sizeof(char);
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 ,len2;
	unsigned int h = 0, i, j;
	char *ptr ;
	
	



	if (s1 != NULL)
		len1 = strlen(s1);
	if (s2 != NULL)
		len2 = strlen(s2);
	if (n >= strlen(s2))
		n = len2;
	ptr = malloc(len1 + (int)(n) + 1);
	if (ptr == NULL)
		return NULL;
	for(i = 0; i < (len1);i++)
	{
		ptr[i] = s1[i];
	}
	for (j = len1; j < (n + len1);j++)
	{
		ptr[j] = s2[h];
		h++;
	}
	ptr[j] = '\0';
	return ptr;
}

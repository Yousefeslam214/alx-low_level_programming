#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings.
 *
 * @s1: array of char.
 * @s2: array of char.
 * @n: int.
 * Return: char.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, h = 0, i, j;
	char *ptr;

	if (s1 != NULL)
		len1 = strlen(s1);
	if (s2 != NULL)
		len2 = strlen(s2);
	if (n >= strlen(s2))
		n = len2;
	ptr = (char *)malloc(len1 + n + 1);
	if (ptr == NULL)
	{
		printf("Error: malloc() failed.\n");
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < (len1); i++)
	{
		ptr[i] = s1[i];
	}
	for (j = len1; j < (n + len1); j++)
	{
		ptr[j] = s2[h];
		h++;
	}
	ptr[j] = '\0';
	return (ptr);
}

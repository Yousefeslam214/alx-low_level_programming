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

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	while (s1[len1])
		len1++;

	while (s2[len2])
		len2++;

	if (n >= len2)
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

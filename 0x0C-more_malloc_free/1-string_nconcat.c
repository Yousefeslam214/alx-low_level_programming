#include "main.h"
#include <stdlib.h>

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
	unsigned int len1 = 0, len2 = 0, j = 0;
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
	ptr = (char *)malloc(sizeof(char) * (len1 + n) + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	len2 = 0;
	while (j < (len1 + n))
	{
		if (j <= len1)
			ptr[j] = s1[j];

		if (j >= len1)
		{
			ptr[j] = s2[len2];
			len2++;
		}
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}

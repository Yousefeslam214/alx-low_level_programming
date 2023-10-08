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
	unsigned int len1= 0, len2 = 0, h = 0, i, j, l = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;

	while (s2[len2])
		len2++;


	if (n >= len2)
		l = len1 + len2;
	else
		l = len1 + n;
	ptr = (char *)malloc(sizeof(char) * l + 1);
	if (ptr == NULL)
		return (NULL);
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

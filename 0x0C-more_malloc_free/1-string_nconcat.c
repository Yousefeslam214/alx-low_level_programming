#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * string_nconcat - point to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2, and null terminated
 * @s1: first string
 * @s2: second string
 * @n: number of char taken from @s2
 * Return: pointer to the new allocated memory that contains s1 and n of s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j = 0, h = 0, len1 = 0, len2 = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (s1 != NULL)
		len1 = strlen(s1);
	if (s2 != NULL)
		len2 = strlen(s2);
	if (n >= strlen(s2))
		n = len2;
	ptr = (char *)malloc(len1 + (int)(n) + 1);
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

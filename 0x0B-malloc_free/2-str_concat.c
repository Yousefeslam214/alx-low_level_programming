#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 *
 * @str: char.
 * Return: char.
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len;
	char *A;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	j = 0;
	len = (int)(strlen(s1) + strlen(s2));
	len1 = (int)strlen(s1);
	A = malloc(sizeof(char) * (len + 1));
	if (A == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		A[i] = s1[i];
	for (i = len1; i < len; i++)
		{
			A[i] = s2[j];
			j++;
		}
	A[i] = '\0';
	return (A);
}

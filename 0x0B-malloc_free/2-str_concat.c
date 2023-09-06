#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function that returns a
 * pointer to a newly allocated space
 * in memory, which contains a copy of
 * the string given as a parameter.
 *
 * @str: char
 * Return: char.
 */

char *str_concat(char *s1, char *s2)
{
	int i, len, j = 0;
	char *n;

	len = (int)(strlen(s1) + strlen(s2));
	if (s1 == 0 || s2 == 0)
		return (NULL);
	n = malloc(sizeof(char) * (len + 1));
	if (n == 0)
		return (NULL);
	else
	{
		for (i = 0; i < (int)(strlen(s1)); i++)
			n[i] = s1[i];
		for (i = (int)strlen(s1); i < len; i++)
		{
			n[i] = s2[j];
			j++;
		}
	}
	return (n);
}

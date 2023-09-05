#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a
 * pointer to a newly allocated space
 * in memory, which contains a copy of
 * the string given as a parameter.
 *
 * @str: char
 * Return: char.
 */

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *n;

	if (str == 0)
		return (NULL);
	for (; str[size] != '\0'; size++)
		;
	n = malloc(size + 1);
	if (n == 0)
		return (NULL);

	else
	{
		for (; i < size; i++)
			n[i] = str[i];
	}
	return (n);
}

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

char *_strdup(char *str)
{
	int i, len;
	char *A;

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	A = malloc(sizeof(char) * len + 1);
	if (A == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		A[i] = str[i];
	A[i] = '\0';
	return (A);
}

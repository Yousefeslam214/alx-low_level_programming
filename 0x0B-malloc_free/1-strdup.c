#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 * memory using malloc.
 *
 * @size: int.
 * @c: char.
 * Return: char.
 */

char *_strdup(char *str)
{
	int i;
	int len;
	char *A;

	len = strlen(str);
	A = malloc(sizeof(char) * len + 1);
	if (len == 0 || A == NULL || str == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		A[i] = str[i];
	A[i] = '\0';
	return (A);
}

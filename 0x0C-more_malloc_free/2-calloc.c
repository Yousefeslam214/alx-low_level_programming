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

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int len1, len2, h = 0, i, j;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = (char *)malloc(nmemb * size);
	if (ptr == 0)
		return (NULL);
	for (i = 0; i < size * nmemb; i++)
		ptr[i] = 0;
	return (ptr);
}

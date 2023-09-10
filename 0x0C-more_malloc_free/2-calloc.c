#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _memset - fills memory with a constant
 * byte.
 * @s: pointer to put the constant.
 * @b: constant.
 * @n: max bytes to use.
 * Return: s.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;
	return (ptr);
}
/**
 * *_calloc - function that allocates memory for an array,
 * using malloc.
 *
 * @nmemb: int.
 * @size: int.
 * Return:a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(sizeof(int) * nmemb);
	if (m == 0)
		return (NULL);
	_memset(m, 0, sizeof(int) * nmemb);
	return (m);
}

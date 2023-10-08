#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * calloc - function that allocates memory for an array, using malloc.
 *
 * @nmeb: int.
 * @size: int.
 * Return: ptr.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
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

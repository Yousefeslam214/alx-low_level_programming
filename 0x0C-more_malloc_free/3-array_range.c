#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - function that allocates memory for an array, using malloc.
 *
 * @nmemb: int.
 * @size: int.
 * Return: ptr.
 */

int *array_range(int min, int max)
{
	unsigned int i;
	char *ptr;

	if (min > max)
		return (NULL);
	ptr = (char *)malloc(nmemb * size);
	if (ptr == 0)
		return (NULL);
	for (i = 0; i < size * nmemb; i++)
		ptr[i] = 0;
	return (ptr);
}

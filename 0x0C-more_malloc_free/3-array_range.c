#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *_calloc - function that allocates memory for an array,
 * using malloc.
 *
 * @nmemb: int.
 * @size: int.
 * Return:a pointer to the allocated memory.
 */

int *array_range(int min, int max)
{
	int *m, arrLen, j;

	if (min > max)
		return (NULL);
	arrLen = max - min + 1;
	m = malloc(sizeof(int) * arrLen);
	if (!m)
		return (NULL);
	for (j = 0; j <= arrLen; j++)
	{
		m[j] = min;
		min++;
	}
	return (m);
}

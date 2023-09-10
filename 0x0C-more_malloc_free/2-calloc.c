#include "main.h"


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

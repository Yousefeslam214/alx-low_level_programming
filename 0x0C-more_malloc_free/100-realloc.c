#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc -  function that reallocates a memory block using malloc and free.
 *
 * @ptr: array of char.
 * @old_size: int.
 * @new_size: int.
 * Return: nothing.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
		char *nptr;
	unsigned int i;
	if (new_size == old_size)
		return (ptr);
	else if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	else if (new_size > old_size)
	{
		void free(void *ptr);
		ptr = malloc(new_size);
	}

	nptr = malloc(new_size);

	if (nptr == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
	{
		nptr[i] = ((char *) ptr)[i];
	}
	free(ptr);
	return (nptr);
}

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
	if (ptr == NULL)
		ptr = malloc(old_size + new_size);
	else if (new_size == old_size)
		return (ptr);
	else if (new_size > old_size)
	{
		void free(void *ptr);
		ptr = malloc(new_size);
	}
	return (ptr);
}

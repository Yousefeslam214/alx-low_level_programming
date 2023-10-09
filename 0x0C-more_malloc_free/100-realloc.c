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

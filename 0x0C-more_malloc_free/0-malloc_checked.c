#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 * memory using malloc.
 *
 * @size: int.
 * @c: char.
 * Return: char.
 */

void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}

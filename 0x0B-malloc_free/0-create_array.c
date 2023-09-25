#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 * memory using malloc.
 *
 * @size: int.
 * @c: char.
 * Return: char.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *A = malloc(sizeof(char) * size);
	if (size == 0 || A == NULL)
		return (NULL);
	
	for (i = 0; i < size; i++)
		A[i] = c;
	A[i] = '\0';
	return A;
}
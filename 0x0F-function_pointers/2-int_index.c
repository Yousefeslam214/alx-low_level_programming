#include <stdlib.h>
#include <string.h>
#include "function_pointers.h"

/**
 * int_index -   function that searches for an integer.
 * @array: array of int.
 * @size: size of array.
 * @cmp: fun.
 * Return: first ele match.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL || array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return(-1);
}

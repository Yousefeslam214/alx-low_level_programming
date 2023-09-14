#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter
 * on each element of an array.
 * @array: array paramiter
 * @size: is the size of the array
 * @action: pointer to function
 * Return:void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && size && action)
		for (i = 0; i < (int)size; i++)
			action(array[i]);
}

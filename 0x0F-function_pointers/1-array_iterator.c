#include <stdlib.h>
#include <string.h>
#include "function_pointers.h"

/**
 * array_iterator -  function that executes a function given as a
 * parameter on each element of an array.
 * @array: array of int.
 * @size: size of array.
 * @action: fun.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}

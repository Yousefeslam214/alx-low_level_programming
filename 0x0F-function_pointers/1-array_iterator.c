#include "function_pointers.h"

/**
 * print_name - print name
 * @name: string paramiter
 * @f:pointer to function
 * Return:void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
    int i;

	if (array && size && action)
        for (i = 0; i < size; i++)
            action(array[i]);
}

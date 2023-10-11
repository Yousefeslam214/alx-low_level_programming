#include "function_pointers.h"
#include <stdlib.h>
#include <string.h>

/**
 * array_range - function that creates an array of integers.
 *
 * @min: int.
 * @max: int.
 * Return: ptr.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

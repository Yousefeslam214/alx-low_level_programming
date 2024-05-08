#include <stdlib.h>
#include <string.h>
#include "function_pointers.h"

/**
 * print_name - function that prints a name.
 *
 * @name: char.
 * @f: fun.
 * Return: noting.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}

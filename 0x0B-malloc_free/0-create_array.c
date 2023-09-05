#include "main.h"
#include <stdlib.h>

/**
 * main - program that prints its name, followed by a new line.
 * @argc: count of arguments
 * @argv: parameter value
 * Return: Always 0.
 */

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

    if (size == 0 || n == 0)
        return(0);
    while (size--)
        n[size] = c;
    return (n);
}

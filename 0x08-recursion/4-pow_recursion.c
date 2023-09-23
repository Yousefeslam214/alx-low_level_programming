#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: string
 * @b: string
 * @n: bytes of the memory area pointed
 *
 * Return: new string.
 */

int _pow_recursion(int x, int y)
{
	if ( y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	return(x * _pow_recursion(x , y - 1));
}

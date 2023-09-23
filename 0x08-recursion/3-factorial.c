#include "main.h"

/**
 * factorial - function that fills memory with a constant byte.
 * @s: string
 * @b: string
 * @n: bytes of the memory area pointed
 *
 * Return: new string.
 */

int factorial(int n)
{
	if (n == 1 || n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return(n * factorial(n - 1));
}

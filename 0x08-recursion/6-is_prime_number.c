#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: string
 * @b: string
 * @n: bytes of the memory area pointed
 *
 * Return: new string.
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	else if (n % 2 == 0)
		return (0);
	return(is_prime_number(n));
}

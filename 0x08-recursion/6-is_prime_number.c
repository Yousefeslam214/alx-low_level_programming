#include "main.h"

int get_prime_num (int a, int b)
{
	if (a < 0)
		return (0);
	else if (a == 1)
		return (0);
	else if (a == 2)
		return (1);
	else if (a % b == 0)
		return (0);
	else if (b * b > a)
		return (1);
	else 
		return(get_prime_num(a, b + 1));
}

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
	return(get_prime_num(n, 2));
}

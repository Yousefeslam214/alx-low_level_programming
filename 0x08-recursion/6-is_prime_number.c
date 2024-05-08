#include "main.h"

/**
 * get_prime_num - function that help to returns 1 if the input
 * integer is a prime number, otherwise return 0.
 * @a: int
 * @b: int
 *
 * Return: int.
 */

int get_prime_num(int a, int b)
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
		return (get_prime_num(a, b + 1));
}

/**
 * is_prime_number - function that returns 1 if the input
 * integer is a prime number, otherwise return 0.
 * @n: int
 *
 * Return: int.
 */

int is_prime_number(int n)
{
	return (get_prime_num(n, 2));
}

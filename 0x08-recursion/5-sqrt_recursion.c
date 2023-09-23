#include "main.h"
int get_sqrt(int a, int b)
{
	 if (b * b == a)
		return (b);
	else if ( b * b > a)
		return (-1);
	else
		return (get_sqrt(a, b + 1));
}
/**
 * _memset - function that fills memory with a constant byte.
 * @s: string
 * @b: string
 * @n: bytes of the memory area pointed
 *
 * Return: new string.
 */

int _sqrt_recursion(int n)
{
	return(get_sqrt(n, 1));
}

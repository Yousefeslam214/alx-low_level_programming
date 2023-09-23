#include "main.h"
int get_sqrt(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	else
		return (get_sqrt(a, b + 1));
}
/**
 * _sqrt_recursion - function that returns the natural
 * square root of a number.
 * @n: int
 *
 * Return: int
 */

int _sqrt_recursion(int n)
{
	return (get_sqrt(n, 1));
}

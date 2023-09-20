#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: string
 * @b: string
 * @n: bytes of the memory area pointed
 *
 * Return: new string.
 */

void _print_rev_recursion(char *s)
{
	if(*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
	{
		return;
	}
}

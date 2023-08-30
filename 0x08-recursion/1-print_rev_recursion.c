#include "main.h"

/**
 * _puts_recursion - function that
 * prints a string in reverse.
 *
 * @s: string
 *
 * Return: new string.
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
		return;
}

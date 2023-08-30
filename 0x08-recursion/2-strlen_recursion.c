#include "main.h"

/**
 * _print_rev_recursion - function that
 * prints a string in reverse.
 *
 * @s: string
 *
 * Return: new string.
 */

int _strlen_recursion(char *s)
{
    int count;
	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
		_putchar(*s);
	}
	else
		return count;
}

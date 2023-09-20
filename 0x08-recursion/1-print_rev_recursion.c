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
	if (*s == '\0') {
		_putchar('\0');
        return;
    }
	_print_rev_recursion(++s);
	_putchar(*s);
}

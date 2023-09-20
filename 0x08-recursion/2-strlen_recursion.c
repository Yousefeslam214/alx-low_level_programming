#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: string
 * @b: string
 * @n: bytes of the memory area pointed
 *
 * Return: new string.
 */

int _strlen_recursion(char *s)
{
    if (*s == '\0')
		return (0);
	return(1 + _strlen_recursion(s + 1));
}

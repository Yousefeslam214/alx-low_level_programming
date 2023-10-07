#include "main.h"
#include <unistd.h>

/**
 * _memset - fills memory with a constant
 * byte.
 * @s: pointer to put the constant.
 * @b: constant.
 * @n: max bytes to use.
 * Return: s.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;
	return (ptr);
}

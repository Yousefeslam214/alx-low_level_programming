#include "main.h"

/**
 * _memcpy - function that copies
 * memory area.
 * @dest: string
 * @src: string
 * @n: bytes of the memory area pointed
 *
 * Return: new string.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

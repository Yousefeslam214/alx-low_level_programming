#include "main.h"
/**
 * _strncat - function that concatenates two strings.
 *
 * @dest: string with concatenation
 *
 * @src: string to be concatenated
 * @n: int
 * Return: concatenates of  two string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int lengthD = 0;

	while (*(dest + lengthD) != '\0')
		lengthD++;
	for (i = 0; i < lengthD && src[i] != '\0'; i++)
		dest[lengthD + i] = src[i];
	dest[lengthD + i] = '\0';
	return (dest);
}

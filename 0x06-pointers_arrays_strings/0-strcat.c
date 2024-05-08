#include <stdio.h>
#include "main.h"

/**
 * _strcat - function that concatenates two string.
 *
 * @dest: string with concatenation
 *
 * @src: string to be concatenated
 *
 * Return: concatenates of  two string.
 */
char *_strcat(char *dest, char *src)
{
	/*int dest_len = strlen(dest);*/
	int i;
	int lengthD = 0;

	while (*(dest + lengthD) != '\0')
		lengthD++;
	for (i = 0; i < lengthD + 1 && src[i] != '\0'; i++)
		dest[lengthD + i] = src[i];
	dest[lengthD + i] = '\0';
	return (dest);
}

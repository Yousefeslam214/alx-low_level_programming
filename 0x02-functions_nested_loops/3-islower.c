#include "main.h"
/**
 * _islower - function checks for lowercase character.
 *
 * @c: input to function.
 *
 * Return: 0 for false , 1 to true.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

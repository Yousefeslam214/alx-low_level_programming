#include "main.h"
/**
 * _isalpha - function checks for alphabetic character.
 * 
 * @c: takes input from other function.
 *
 * Return: 1 is c letter else 0 .
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

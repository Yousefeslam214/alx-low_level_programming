#include <unsistd.h>
#inclide "main.h"

/**
 * _putchar - writes the character
 *
 * Return: 0.
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

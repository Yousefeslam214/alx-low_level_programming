#include "main.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>


bool palindrome (char *string, int left, int right)
{
	if (left >= right)
		return true;
	else if (string[left] == string[right])
		return palindrome(string, left + 1, right - 1);
	else
		return false;
}

/**
 * _memset - function that fills memory with a constant byte.
 * @s: string
 * @b: string
 * @n: bytes of the memory area pointed
 *
 * Return: new string.
 */

int is_palindrome(char *s)
{
	int len = strlen(s);
	return (palindrome(s, 0, len - 1));
}

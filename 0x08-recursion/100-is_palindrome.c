#include "main.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/**
 * palindrome - function that help to returns 1 if a string
 * is a palindrome and 0 if not.
 * @string: string
 * @left: int
 * @right: int
 *
 * Return: bool.
 */

bool palindrome(char *string, int left, int right)
{
	if (left >= right)
		return (true);
	else if (string[left] == string[right])
		return (palindrome(string, left + 1, right - 1));
	else
		return (false);
}

/**
 * is_palindrome - function that returns 1 if a string is a palindrome and 0 if not.
 * @s: string
 *
 * Return: int.
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	return (palindrome(s, 0, len - 1));
}

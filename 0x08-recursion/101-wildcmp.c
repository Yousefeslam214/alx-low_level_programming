#include "main.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/*
bool palindrome (char *s1, char *s2,int start, int len)
{
	if (start >= len)
		return true;
	else if (s1[start] == s2[start])
		return palindrome(s1,s2, start + 1, len);
	else
		return false;
}
*/
/**
 * _memset - function that fills memory with a constant byte.
 * @s: string
 * @b: string
 * @n: bytes of the memory area pointed
 *
 * Return: new string.
 */
/*
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
        return true;
	else if (*s1 == *s2 || *s2 == '?')
    	return wildcmp(s1 + 1, s2 + 1);
	else 
		return false;
}*/
/*
int wildcmp(char *s1, char *s2)
{
    if (*s1 == '\0' && *s2 == '\0')
        return true;

    if (*s1 == *s2 || *s2 == '?')
        return wildcmp(s1 + 1, s2 + 1);

    if (*s2 == '*') {
        while (*(s2 + 1) == '*')
            s2++;

        while (*s1 != '\0') {
            if (wildcmp(s1, s2 + 1))
                return true;
            s1++;
        }
    }

    return false;
}
*/


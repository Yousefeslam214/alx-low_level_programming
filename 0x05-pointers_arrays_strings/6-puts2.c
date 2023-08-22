#include <stdio.h>
#include "main.h"
/**
 * rev_string - function that prints every other character of a string, starting with the first character,
 * followed by a new line.
 *
 * @s: char
 */

void rev_string(char *s)
{
        int i, j, len;

        while (s[i] != '\0')
        {
                i++;
        }
        len = i;
        for (j = 0; j < len; j +=2)
        {
                _putchar(s[j]);
        }
        _putchar('\n');
}

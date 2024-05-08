#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
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


int main(void)
{
    char *s = "hello";
    char *f;

    f = _strchr(s, 'h');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    return (0);
}
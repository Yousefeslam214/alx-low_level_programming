#include <stdio.h>
#include"main.h"
/**
 * print_alphabet - print alphabet.
 *
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int a;

	for (a = 'a' ; a <= 'z' ; a++)
		putchar(a);
	putchar('\n');
}

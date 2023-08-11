#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - this function use to  print alphabet
 *
 * Return:0.
 **/
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
		putchar (alphabet);
	putchar ('\n');
	return (0);
}

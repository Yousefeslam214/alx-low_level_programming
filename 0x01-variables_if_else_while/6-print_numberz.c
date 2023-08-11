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
	int alphabet;

	for (alphabet = '0'; alphabet <= '9'; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}


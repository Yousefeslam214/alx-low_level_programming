#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - this function use to  print all the numbers of base 16 in lowercase .
 *
 * Return:0.
 **/
int main(void)
{
	char alphabet;

	for (alphabet = '0'; alphabet <= '9'; alphabet++)
		putchar(alphabet);
	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}

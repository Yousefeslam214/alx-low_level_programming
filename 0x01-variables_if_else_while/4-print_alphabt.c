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

	for(alphabet = 'a'; alphabet <= 'z'; alphabet++)
		if (alphabet!= 'e' && alphabet != 'q')
			putchar(alphabet);
	putchar('\n');
	return (0);
}

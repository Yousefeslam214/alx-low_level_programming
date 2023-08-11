#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - this function use to  prints all possible combinations of single-digit numbers.
 *
 * Return:0.
 **/
int main(void)
{
	char alphabet;
	char separated = ',';
	char space = ' ';

	for (alphabet = '0'; alphabet <= '9'; alphabet++){
		putchar(alphabet);
		if (alphabet != '9'){
			putchar(separated);
			putchar(space);
		}
	}
	putchar('\n');
}

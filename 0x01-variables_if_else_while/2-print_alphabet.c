#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - this function use to  print alphabet
 * 
 * return - o.
 **/
int main(void)
{
	char alphabet;

	for(alphabet = 'a';alphabet <= 'z';alphabet++)
		putchar(alphabet);
	putchar('\n');
	/*for(alphabet = 'A';alphabet <= 'Z';alphabet++)
		putchar(alphabet);*/
	return 0;
}

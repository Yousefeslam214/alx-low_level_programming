#include "main.h"
/**
 * print_alphabet_x10 - entry point.
 *
 *
 * 
 */
void print_alphabet_x10(void){
	int a,num ;

	for (num = 0 ; num<=9 ; num++)
	{
		for (a ='a';a<='z';a++)
			putchar(a);
		putchar('\n');
	}
}

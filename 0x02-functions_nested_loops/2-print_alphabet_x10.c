#include <stdio.h>
#include"main.h"
/**
 * print_alphabet_x10 - entry point.
 *
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void){
	int a,num ,i;

	for (num = 10 ; i < num ; i++)
	{
		for (a ='a';a<='z';a++)
			putchar(a);
		putchar('\n');
	}
}

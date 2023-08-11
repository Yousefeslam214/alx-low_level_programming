#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - this function use to  prints 
 * all possible different combinations of two digits.
 *
 * Return:0.
 **/
int main(void) {
	for (int i = 0; i <= 9; i++) {
		for (int j = i + 1; j <= 9; j++) {
			if (i != j) {
				putchar('0' + i);
				putchar('0' + j);
				putchar(',');
				putchar(' ');
			}
		}
	}
    return (0);
}

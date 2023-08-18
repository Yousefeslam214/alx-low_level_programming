#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 * 3 multiples print Fizz instead of the number
 * 5 multiples print Buzz instead of the number
 * 3 & 5 multiples print FizzBuzz instead of the number
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 0;

	while (num++ < 100)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
			printf("FizzBuzz ");
		else if ((num % 3) == 0)
			printf("Fizz ");
		else if ((num % 5) == 0)
		{
			if (num != 100)
				printf("Buzz ");
			else
				printf("Buzz");
		}
		else
			printf("%d ", num);
	}
	printf("\n");
	return (0);
}

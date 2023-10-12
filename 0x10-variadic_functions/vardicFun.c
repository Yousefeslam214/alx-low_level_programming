#include <stdio.h>
#include <stdarg.h>
#include <string.h>

int maxNum(int num_args, ...);
void print(char *placeholders, ...);

int main(void)
{
	printf("some string %d %f\n", 5, 5.5);

	int max = maxNum(5, 4, 8, 10, 100, 11325);
	printf("max_num: %d\n", max);
	printf("################");
	print("ddfd", 4, 2, 10.5, 3);
	print("fdfdf", 1.1, 0, 2.2, 5, 3.2);
	return (0);
}

int maxNum(int num_args, ...)
{
	int max = 0;
	va_list args;

	va_start(args, num_args);
	for (int i = 0; i < num_args; i++)
	{
		int x = va_arg(args, int);
		if (i == 0) max = x;
		else if (x > max) max = x;
	}
	va_end(args);
	return (max);
}

void print(char *placeholders, ...)
{
	int num_args = strlen(placeholders);
	va_list args; // it place of ...

	va_start(args, placeholders);
	for (int i = 0; i < num_args; i++)
	{
		if (placeholders[i] == 'd')
		{
			int x = va_arg(args, int); // like argv // it take size of int to argv
			printf("%d\n", x);
		}
		else if (placeholders[i] == 'f')
		{
			double x = va_arg(args, double);
			printf("%f\n", x);
		}
	}
	va_end(args); //free memory
}

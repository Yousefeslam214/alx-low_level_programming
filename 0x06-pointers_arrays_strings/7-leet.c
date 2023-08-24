#include "main.h"
/**
 * string_toupper - function that changes all
 * lowercase letters
 * of a string to uppercase.
 *
 * @in: array of char.
 * Return: string of uppercase.
*/
char *string_toupper(char *in)
{
	int i = 0;
	int asci = 'a' - 'A';

	while (in[i] != '\0')
	{
		if (in[i] >= 'a' || in[i] <= 'A')
		{
		in[i] = '4';
		}
        else if (in[i] >= 'e' || in[i] <= 'E')
		{
		in[i] = '3';
		}
        else if (in[i] >= 'o' || in[i] <= 'O')
		{
		in[i] = '0';
		}
        else if (in[i] >= 't' || in[i] <= 'T')
		{
		in[i] = '7';
		}
        else if (in[i] >= 'l' || in[i] <= 'L')
		{
		in[i] = '1';
		}
		i++;
	}
	return (in);
}
int main(void)
{
    char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    char *p;

    p = leet(s);
    printf("%s", p);
    printf("%s", s);
    return (0);
}

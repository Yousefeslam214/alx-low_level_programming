#include "main.h"
/**
 * string_toupper - function that changes all
 * lowercase letters
 * of a string to uppercase.
 *
 * @in: array of char.
 * Return: string of uppercase.
*/
char *cap_string(char *in)
{
	int i = 0;
	int asci = 'a' - 'A';

	while (in[i] != '\0')
	{
		if ((in[i] >= 'a' && in[i] <= 'z')  || (in[i] >= 'A' && in[i] <= 'Z'))
		{
		//in[i] = in[i] - asci;
            continue;
		}
        else
        {
            in[i+1] = in[i+1] - asci;
        }
		i++;
	}
	return (in);
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;

    ptr = cap_string(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}
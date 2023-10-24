#include "lists.h"
#include <string.h>

/**
 * print_list -  function that prints all the elements of a list_t list.
 * @h: LinkedList
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *temp;
	size_t len = 0;

	temp = h;
	while (temp)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", (int)strlen(temp->str), temp->str);
		}
		temp = temp->next;
		len++;
	}
	return (len);
}

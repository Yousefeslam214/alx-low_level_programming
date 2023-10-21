#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * print_list -  function that prints all the elements of a list_t list.
 * @h: LinkedList
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%d]", h->len);
			printf(" %s", h->str);
		}
		printf("\n");
		h = h->next;
		len++;
	}
	return (len);
}

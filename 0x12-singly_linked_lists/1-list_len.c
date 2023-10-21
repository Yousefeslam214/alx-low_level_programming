#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * print_list -  function that prints all the elements of a list_t list.
 * @h: LinkedList
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}

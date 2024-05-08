#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * list_len -  function that returns the number of elements in a
 * linked list_t list.
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

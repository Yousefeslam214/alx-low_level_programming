#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - add node between Nodes
 * @head:LinkedList
 * @str:string
 * Return:the address of the new element, or NULL if it failed
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

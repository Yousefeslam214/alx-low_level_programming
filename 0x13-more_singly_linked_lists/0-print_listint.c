#include "lists.h"
#include <string.h>

/**
 * print_list - print linkedList
 * @h:the List
 * Return:length
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t len = 0;

	temp = h;
	while (temp != NULL)
	{
		if (temp->n)
			printf("%d\n", temp->n);
		else
			printf("[0] (nil)\n");
		temp = temp->next;
		len++;
	}
	return (len);
}

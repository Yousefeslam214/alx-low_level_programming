#include "lists.h"
#include <string.h>

/**
 * print_listint - print linkedList
 * @h:the List
 * Return:length
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	size_t len = 0;

	temp = h;
	while (temp != NULL)
	{
		temp = temp->next;
		len++;
	}
	return (len);
}

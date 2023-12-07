#include "lists.h"

/**
 * dlistint_len - returns the number of elements in
 * a double linked list
 *
 * @h: head of the list
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t len = 0;

	if (!h)
		return (len);
	while (temp->prev != NULL)
		temp = temp->prev;
	while (temp)
	{
		temp = temp->next;
		len++;
	}
	return (len);
}

#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t len = 0;

	if (!h)
		return (len);
	while (temp->prev != NULL)
		temp = temp->prev;
	while (temp)
	{
		printf("%d\n",temp->n);
		temp = temp->next;
		len++;
	}
	return (len);
}

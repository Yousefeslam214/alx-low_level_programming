#include "lists.h"
#include <string.h>

/**
 * free_listint2 - free list
 * @head:the List
 * Return:noting
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}

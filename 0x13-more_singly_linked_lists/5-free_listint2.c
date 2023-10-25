#include "lists.h"
#include <string.h>

/**
 * free_listint2 - free list
 * @head:the List
 * Return:noting
 */

void free_listint2(listint_t **head)
{
	listint_t *temp = *head;
	if(head == NULL)
		return;
	free(head);
	while (*head)
	{
		*head = (*head)->next;
		free(temp);
		temp = *head;
	}
	*head = NULL;
}

#include "lists.h"
#include <string.h>

/**
 * add_nodeint_end - add node to end of linkedList
 * @head:the List
 * @n:int
 * Return:new node address
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		free(temp);
		head = head->next;
	}
}

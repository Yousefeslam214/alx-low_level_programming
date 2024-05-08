#include "lists.h"
#include <string.h>

/**
 * add_nodeint - add node to linkedList
 * @head:the List
 * @n:int
 * Return:new node address
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = (listint_t *)malloc(sizeof(listint_t));

	if (!head || !newNode)
	{
		free(newNode);
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}

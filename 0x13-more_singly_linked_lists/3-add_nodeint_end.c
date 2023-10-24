#include "lists.h"
#include <string.h>

/**
 * add_nodeint_end - add node to end of linkedList
 * @head:the List
 * @n:int
 * Return:new node address
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = (listint_t *)malloc(sizeof(listint_t));
	listint_t *temp;

	temp = *head;
	if (!head || !newNode)
	{
		free(newNode);
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;
	if (temp)
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newNode;
		return (newNode);
	}
	else
	{
		*head = newNode;
		return (newNode);
	}
	free(newNode);
	return (NULL);
}

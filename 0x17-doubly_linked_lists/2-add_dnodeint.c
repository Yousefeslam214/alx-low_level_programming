#include "lists.h"

/**
 * dlistint_len - returns the number of elements in
 * a double linked list
 *
 * @h: head of the list
 * Return: the number of nodes
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = *head;
	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	if (!head|| !*head)
		{
			*head = newNode;
			return (newNode);
		}
	newNode->next = *head;
	newNode->n = n;
	(*head)->prev = newNode;
	*head = newNode;
	return (newNode);
}

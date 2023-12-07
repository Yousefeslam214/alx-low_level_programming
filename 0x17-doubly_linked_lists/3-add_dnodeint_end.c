#include "lists.h"

/**
 * add_dnodeint_end - add node at end
 * @head: list
 * @n:the number that add in the list
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *h = *head;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	if (!head || !*head)
	{
		*head = newNode;
		return (newNode);
	}
	while (h->next)
	{
		h = h->next;
	}
	h->next = newNode;
	newNode->prev = h;
	return (newNode);
}

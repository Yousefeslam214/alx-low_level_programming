#include "lists.h"

/**
 * add_dnodeint - add node at beginning
 * @head: list
 * @n:number that add in list
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = *head;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	if (!head || !*head)
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

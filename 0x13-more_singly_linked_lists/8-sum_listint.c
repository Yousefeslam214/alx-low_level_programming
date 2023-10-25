#include "lists.h"

/**
 * sum_listint - sum of the list
 * @head: head of the list
 * Return: sum of the list
 */
int sum_listint(listint_t *head)
{

	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}

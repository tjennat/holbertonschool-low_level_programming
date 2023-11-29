#include "lists.h"

/**
 * sum_dlistint - summarizing all data in doubly linked list
 * @head: is the head of my doubly linked list
 * Return: all data or zero
 */
int sum_dlistint(dlistint_t *head)
{

	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}

#include "lists.h"

/**
 * get_dnodeint_at_index - returning nth node of doubly linked list
 * @head: is head of my doubly linked list
 * @index: index of node
 * Return: current or null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;


	while (current != NULL && index > 0)
	{
		current = current->next;
		index--;
	}


	if (index > 0)
	{
		return (NULL);
	}

	return (current);
}

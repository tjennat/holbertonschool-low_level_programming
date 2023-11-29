#include "lists.h"

/**
 * add_dnodeint_end - adding node to the end in doubly linked list
 * @head: is the pointer to the adress to the head
 * @n: is my constant integer
 * Return: Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	if (temp != NULL)
	{
	new_node->prev = temp;
	temp->next = new_node;
	}
	else
	{
		free(new_node);
		return (NULL);
	}

	return (new_node);
}

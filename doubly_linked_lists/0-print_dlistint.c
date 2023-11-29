#include "lists.h"

/**
 * print_dlistint - printing all elements of a doubly linked list
 * @h: is my pointer to the doubly linked list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nod = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nod++;
	}

	return (nod);
}

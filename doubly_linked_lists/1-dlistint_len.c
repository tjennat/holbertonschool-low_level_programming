#include "lists.h"

/**
 * dlistint_len - number of element in doubly linked list
 * @h: 
 * Return: num of elem or NULL
 */
size_t dlistint_len(const dlistint_t *h)
{
	int nod = 0;

	while(h != NULL)
	{
		h = h->next;
		nod++;
	}
	return (nod);
}

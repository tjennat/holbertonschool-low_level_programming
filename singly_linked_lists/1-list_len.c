#include "lists.h"

/**
 * list_len - print number of elements in my linked list
 * @h: pointer to the linked list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int nod = 0;

	while (h != NULL)
	{
		h = h->next;
		nod++;
	}
	return (nod);
}

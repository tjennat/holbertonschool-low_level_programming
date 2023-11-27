#include "lists.h"

/**
 * size_t print_list - will print all elements of a list
 * @h: is my pointer to the singly linked list
 * return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nod = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		nod++;
	}

	return (nod);
}

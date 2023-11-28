#include "lists.h"
#include <stdlib.h>
/**
 * free_list - Frees the list_t
 * @head: A pointer to the head of the list.
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next_node;

	while (current != NULL)
	{
		next_node = current->next;
		free(current->str);
		free(current);
		current = next_node;
	}
}


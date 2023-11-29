#include "lists.h"

/**
 * delete_dnodeint_at_index - delete the node at a given position
 * @head: pointer to a pointer that point to the first node
 * @index: the place to the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head;
	dlistint_t *ptr2 = NULL;
	unsigned int count = 0;

	while (ptr != NULL)
	{
		if (count == index)
		{
			if (ptr2 != NULL)
			{
				ptr2->next = ptr->next;
			}
			else
			{
				*head = ptr->next;
			}
			if (ptr->next != NULL)
			{
				ptr->next->prev = ptr2;
			}

			free(ptr);
			return (1);
		}
		ptr2 = ptr;
		ptr = ptr->next;
		count++;
	}
	return (-1);
}

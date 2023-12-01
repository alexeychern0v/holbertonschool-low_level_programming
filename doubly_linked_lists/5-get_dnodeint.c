#include "lists.h"

/**
 * get_dnodeint_at_index - return the node of list
 *
 * @head: pointer to the head
 *
 * @index: index of the node
 *
 * Return: the node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current = head;

	for (i = 0; current != NULL; i++)
	{
		if (i == index)
			return (current);

		current = current->next;
	}

	return (NULL);
}

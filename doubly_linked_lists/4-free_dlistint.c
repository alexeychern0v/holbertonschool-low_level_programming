#include "lists.h"

/**
 * free_dlistint - free the list
 *
 * @head: pointer to the head
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t free_list;

	while (head != NULL)
	{
		free_list = head;
		head = head->next;
		free(free_list);
	}
}

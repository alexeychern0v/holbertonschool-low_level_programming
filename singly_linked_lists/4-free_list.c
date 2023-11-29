#include "lists.h"

/**
 * free_list - free a list
 *
 * @head: adress of the list
 */

void free_list(list_t *head)
{
	list_t *free_node;

	while (head != 0)
	{
		free_node = head;
		head = head->next;
		free(free_node->str);
		free(free_node);
	}
}

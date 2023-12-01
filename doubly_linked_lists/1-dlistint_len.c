#include "lists.h"

/**
 * dlistint_len - return number of elements
 * 
 * @h: pointer to the head
 *
 * Return: the number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	unsigned int i;

	for (i = 0; h != NULL; i++)
		h = h->next;

	return (i);
}

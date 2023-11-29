#include "lists.h"

/**
 * list_len - print number of elements
 *
 * @h: adress of the first node
 *
 * Return: number of elements
*/

size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}

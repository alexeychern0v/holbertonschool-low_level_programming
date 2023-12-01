#include "lists.h"

/**
 * print_dlistint - prints all the elements of the list
 *
 * @h: pointer to the head
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	unsigned int i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}

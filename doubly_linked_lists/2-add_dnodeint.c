#include "lists.h"

/**
 * add_dnodeint - add a new node at the beginning
 *
 * @head: pointer to the pointer to the head
 *
 * @n: value for the new node
 *
 * Return: The address of the new element or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL || n = 0)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}

#include "lists.h"

/**
 * insert_dnodeint_at_index -  inserts a new node at a given position.
 * @h: head of the list
 * @idx: index
 * @n: integer
 * Return: : the address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t)), *tmp;
	unsigned int i;

	if (!new_node)
		return (NULL);

	new_node->n = n;

	tmp = *h;
	for (i = 0; i < idx - 1 && tmp; i++)
		tmp = tmp->next;

	if (!tmp)
		return (NULL);

	new_node->prev = tmp;
	new_node->next = tmp->next;
	tmp->next->prev = new_node;
	tmp->next = new_node;

	return (new_node);
}

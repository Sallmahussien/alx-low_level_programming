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
	dlistint_t *new_node, *tmp;
	unsigned int i;

	if (!*h && idx > 0)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	tmp = *h;
	for (i = 0; i < idx - 1 && tmp; i++)
		tmp = tmp->next;

	if (!tmp)
	{
		free(new_node);
		return (NULL);
	}

	new_node->prev = tmp;
	new_node->next = tmp->next;
	if (tmp->next)
		tmp->next->prev = new_node;
	tmp->next = new_node;
	return (new_node);
}

#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: dlinked list head
 * @index:  is the index of the node, starting from 0
 * Return: returns the nth node or NULL or node doesn't exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i;

	if (!head)
		return (NULL);

	tmp = head;
	for (i = 0; i < index && tmp; i++)
		tmp = tmp->next;

	if (!tmp)
		return (NULL);

	return (tmp);
}

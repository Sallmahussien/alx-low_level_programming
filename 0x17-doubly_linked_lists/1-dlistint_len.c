#include "lists.h"

/**
 * dlistint_len - the number of elements in a linked dlistint_t list.
 * @h: pointer to head of the dlinked list
 * Return: number of dlinked list nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t nodes_num = 0;

	while (tmp)
	{
		nodes_num += 1;
		tmp = tmp->next;
	}
	return (nodes_num);
}

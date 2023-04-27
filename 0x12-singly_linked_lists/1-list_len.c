#include "lists.h"

/**
 * list_len - number of elements in a linked list_t list.
 * @h: pointer to linked list
 * Return: no of elements
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}

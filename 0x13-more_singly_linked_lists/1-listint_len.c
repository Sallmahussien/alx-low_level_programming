#include "lists.h"

/**
 * listint_len - the number of elements in a linked listint_t list.
 * @h: pointer to head of the list
 * Return: no. of list elements
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}

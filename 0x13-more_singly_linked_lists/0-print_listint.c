#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: A pointer to the head of the list_t list.
 * Return: no. of list elements.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}

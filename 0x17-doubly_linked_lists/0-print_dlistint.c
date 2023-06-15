#include "lists.h"

/**
 * print_dlistint -  prints all the elements of a doubly linked list
 * @h: pointer to head of doubly linled list
 * Return: the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t nodes_num = 0;

	while (tmp)
	{
		printf("%d\n", tmp->n);
		nodes_num += 1;
		tmp = tmp->next;
	}
	return (nodes_num);
}

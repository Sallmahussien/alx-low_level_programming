#include "lists.h"

/**
 * sum_listint -  sum of all the data (n) of a listint_t linked list.
 * @head: pointer to the head of linked list
 * Return: summ of all data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp;

	if (head == NULL)
		return (sum);

	tmp = head;
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}

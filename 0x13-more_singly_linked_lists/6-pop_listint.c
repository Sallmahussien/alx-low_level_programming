#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 *               and returns the head node’s data (n).
 * @head: pointer to the address of the head
 * Return: value of the head
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int value;

	if (*head == NULL)
		return (0);

	tmp = *head;
	value = tmp->n;
	*head = tmp->next;

	free(tmp);

	return (value);
}

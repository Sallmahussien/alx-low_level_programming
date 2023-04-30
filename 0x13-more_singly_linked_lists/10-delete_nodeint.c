#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t.
 * @head: pointer to the address of list head
 * @index: list index to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *tmp;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	current = *head;
	while (current)
	{
		if (index == (i + 1))
		{
			tmp = current->next;
			current->next = tmp->next;
			free(tmp);
			return (1);
		}
		current = current->next;
		i++;
	}
	return (-1);
}

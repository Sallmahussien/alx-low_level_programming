#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to address of the head.
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		current_node = *head;
		*head = current_node->next;
		free(current_node);
	}
	head = NULL;
}

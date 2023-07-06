#include "hash_tables.h"

/**
 * hash_table_set -  adds an element to the hash table.
 * @ht: s the hash table you want to add or update the key/value to
 * @key: is the key.
 * @value: is the value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *current_node;
	unsigned long int idx;

	if (!ht || !key || !value || *key == '\0')
		return (FAIL);

	idx = key_index((const unsigned char *) key, ht->size);
	current_node = ht->array[idx];

	new_node = create_new_node(key, value);
	if (!new_node)
		return (FAIL);

	if (!current_node)
	{
		ht->array[idx] = new_node;
		return (SUCCESS);
	}

	while (current_node)
	{
		if (!strcmp(key, current_node->key))
		{
			free(current_node->value);
			current_node->value = strdup(value);
			free_new_node(new_node);
			return (SUCCESS);
		}
		current_node = current_node->next;
	}

	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;

	return (SUCCESS);
}


/**
 * create_new_node - creates a new node of the linked list
 * @key: is the key.
 * @value: is the value associated with the key.
 * Return: pointer to new node or NULL if it fails
*/
hash_node_t *create_new_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	return (new_node);
}

/**
 * free_new_node - free a new node for the linked list
 * @new_node: new node of the linked list
*/
void free_new_node(hash_node_t *new_node)
{
	free(new_node->key);
	free(new_node->value);
	free(new_node);
}

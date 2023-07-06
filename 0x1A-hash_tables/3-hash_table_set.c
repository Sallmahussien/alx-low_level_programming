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

	if (strlen(key) == 0)
		return (FAIL);

	idx = key_index((const unsigned char *) key, ht->size);

	if (!ht->array[idx])
	{
		current_node = ht->array[idx];
		while (current_node)
		{
			if (!strcmp(key, current_node->key))
			{
				current_node->value = strdup(value);
				return (SUCCESS);
			}
			current_node = current_node->next;
		}
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (FAIL);

	new_node->key = strdup(key);
	new_node->value = strdup(value);


	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;

	return (SUCCESS);
}

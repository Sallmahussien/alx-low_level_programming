#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: s the hash table you want to add or update the key/value to
 * @key: is the key.
 * Return: the value associated with the element,
 *         or NULL if key couldn’t be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long idx;
	hash_node_t *current_node;

	if (!ht || !key || *key == '\0')
		return (NULL);

	idx = key_index((const unsigned char *) key, ht->size);
	if (!ht->array[idx])
		return (NULL);

	current_node = ht->array[idx];
	while (current_node)
	{
		if (!strcmp(current_node->key, key))
			return (current_node->value);

		current_node = current_node->next;
	}

	return (NULL);
}

#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: is the hash table
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *current_node, *tmp;

	for (idx = 0; idx < ht->size; idx++)
	{
		current_node = ht->array[idx];

		while (current_node)
		{
			tmp = current_node;
			current_node = current_node->next;
			free_new_node(tmp);
		}
	}

	free(ht->array);
	free(ht);
}

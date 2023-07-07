#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: is the hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long idx;
	hash_node_t *current_node;
	int flag = 0;

	if (!ht)
		return;

	printf("{");

	for (idx = 0; idx < ht->size; idx++)
	{
		current_node = ht->array[idx];
		while (current_node)
		{
			if (flag == 1)
			{
				printf(", ");
			}

			printf("'%s': '%s'", current_node->key, current_node->value);
			current_node = current_node->next;
			flag = 1;
		}
	}
	printf("}\n");
}

#include "hash_tables.h"

/**
 * hash_table_create -  creates a hash table.
 * @size: the size of the array
 * Return: pointer to the newly created hash table or NULL if it fails
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int idx;

	hash_table = malloc(sizeof(hash_table_t));
	if (!hash_table)
		return (NULL);

	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (!hash_table->array)
	{
		free(hash_table);
		return (NULL);
	}

	for (idx = 0; idx < hash_table->size; idx++)
		hash_table->array[idx] = NULL;

	return (hash_table);

}

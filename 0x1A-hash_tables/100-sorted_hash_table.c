#include "hash_tables.h"

/**
 * create_new_shash_node - creates a new node of the linked list
 * @key: is the key.
 * @value: is the value associated with the key.
 * Return: pointer to new node or NULL if it fails
*/
shash_node_t *create_new_shash_node(const char *key, const char *value)
{
	shash_node_t *new_node;

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	new_node->snext = NULL;
	new_node->sprev = NULL;

	return (new_node);
}

/**
 * free_new_shash_node - free a new node for the linked list
 * @new_node: new node of the linked list
*/
void free_new_shash_node(shash_node_t *new_node)
{
	free(new_node->key);
	free(new_node->value);
	free(new_node);
}

/**
 * shash_table_create - creates a hash table.
 * @size: the size of the array
 * Return: pointer to the newly created hash table or NULL if it fails
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *shash_table;
	unsigned long int idx;

	shash_table = malloc(sizeof(shash_table_t));
	if (!shash_table)
		return (NULL);

	shash_table->size = size;
	shash_table->array = malloc(sizeof(shash_node_t *) * size);
	if (!shash_table->array)
	{
		free(shash_table);
		return (NULL);
	}

	for (idx = 0; idx < shash_table->size; idx++)
		shash_table->array[idx] = NULL;

	shash_table->shead = NULL;
	shash_table->stail = NULL;

	return (shash_table);
}

/**
 * shash_table_set -  adds an element to the hash table.
 * @ht: s the hash table you want to add or update the key/value to
 * @key: is the key.
 * @value: is the value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *current_node;
	unsigned long int idx;

	if (!ht || !key || !value || *key == '\0')
		return (FAIL);
	idx = key_index((const unsigned char *) key, ht->size);
	current_node = ht->array[idx];

	new_node = create_new_shash_node(key, value);
	if (!new_node)
		return (FAIL);
	if (!current_node)
	{
		ht->array[idx] = new_node;
		if (!ht->shead && !ht->stail)
		{
			ht->shead = new_node;
			ht->stail = new_node;
			return (SUCCESS);
		}
		sort_hash_table(ht, new_node);
		return (SUCCESS);
	}

	while (current_node)
	{
		if (!strcmp(key, current_node->key))
		{
			free(current_node->value);
			current_node->value = strdup(value);
			free_new_shash_node(new_node);
			return (SUCCESS);
		}
		current_node = current_node->next;
	}
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	sort_hash_table(ht, new_node);
	return (SUCCESS);
}

/**
 * sort_hash_table - sort a new node in hash table
 * @ht: hash tanle
 * @node: new node to be sorted
*/
void sort_hash_table(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *current_node;

	if (strcmp(ht->shead->key, node->key) > 0)
	{
		node->snext = ht->shead;
		ht->shead->sprev = node;
		ht->shead = node;
		return;
	}

	current_node = ht->shead;
	while (current_node && strcmp(current_node->key, node->key) < 0)
	{
		current_node = current_node->snext;
	}

	if (current_node == NULL)
	{
		node->snext = NULL;
		node->sprev = ht->stail;
		ht->stail->snext = node;
		ht->stail = node;
		return;
	}

	node->snext = current_node;
	node->sprev = current_node->sprev;
	if (current_node->sprev != NULL)
		current_node->sprev->snext = node;
	current_node->sprev = node;
}

/**
 * shash_table_get - retrieves a value associated with a key.
 * @ht: s the hash table you want to add or update the key/value to
 * @key: is the key.
 * Return: the value associated with the element,
 *         or NULL if key couldn’t be found
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long idx;
	shash_node_t *current_node;

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

/**
 * shash_table_print - prints a hash table.
 * @ht: is the hash table
*/
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current_node;
	int flag = 0;

	if (!ht)
		return;

	current_node = ht->shead;

	printf("{");

	while (current_node)
	{
		if (flag == 1)
		{
			printf(", ");
		}

		printf("'%s': '%s'", current_node->key, current_node->value);
		current_node = current_node->snext;
		flag = 1;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints a hash table.
 * @ht: is the hash table
*/
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current_node;
	int flag = 0;

	if (!ht)
		return;

	current_node = ht->stail;

	printf("{");

	while (current_node)
	{
		if (flag == 1)
		{
			printf(", ");
		}

		printf("'%s': '%s'", current_node->key, current_node->value);
		current_node = current_node->sprev;
		flag = 1;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a hash table.
 * @ht: is the hash table
*/
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int idx;
	shash_node_t *current_node, *tmp;

	for (idx = 0; idx < ht->size; idx++)
	{
		current_node = ht->array[idx];

		while (current_node)
		{
			tmp = current_node;
			current_node = current_node->next;
			free_new_shash_node(tmp);
		}
	}

	free(ht->array);
	free(ht);
}

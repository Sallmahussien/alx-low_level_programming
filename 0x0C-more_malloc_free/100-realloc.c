#include "main.h"
/**
 * _realloc -  reallocates a memory block using malloc and free.
 * @ptr:  pointer to the memory previously allocated with a call to malloc.
 * @old_size: old_size.
 * @new_size: new size, in bytes of the new memory block.
 * Return: pointer to new allocated mem
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *arr;
	char *mem, *ptrcp;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		arr = malloc(new_size);
		if (arr == NULL)
			return (NULL);
		return (arr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size > old_size)
	{
		ptrcp = ptr;
		mem = malloc(sizeof(*ptrcp) * new_size);
		if (mem == NULL)
		{
			free(ptr);
			return (NULL);
		}

		arr = mem;

		for (i = 0; ptrcp[i]; i++)
			mem[i] = ptrcp[i];

		free(ptr);
	}
	return (arr);
}

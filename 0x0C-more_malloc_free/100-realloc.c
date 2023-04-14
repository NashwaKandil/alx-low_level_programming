#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to old memory
 * @old_size: memory old size
 * @new_size: memory new size
 * Return: pointer to new memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *new;
	char *old;

	if (new_size == old_size)
		return (ptr);
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	new = malloc(new_size);
	if (new == NULL)
		return (NULL);
	old = ptr;
	if (new_size < old_size)
	{
		for (i = 0 ; i < new_size ; i++)
			new[i] = old[i];
	}
	if (new_size > old_size)
	{
		for (i = 0 ; i < old_size ; i++)
			new[i] = old[i];
	}
	free(ptr);
	return (new);
}


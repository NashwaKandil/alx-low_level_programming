#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc
 * @b: amount of bytes
 * Return: adress to memory allocated
 */

void *malloc_checked(unsigned int b)
{
	int *add;

	add = malloc(b);
	if (add == NULL)
		exit(98);
	return (add);
}

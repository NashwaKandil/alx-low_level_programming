#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: list to print
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
		if (h->n)
		{
			printf("%d\n", h->n);
		}
		h = h->next;
		i++;
	}
	return (i);

}

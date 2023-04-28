#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	char *c;
	size_t s;

	s = 0;
	while (h)
	{
		if (h->str == NULL)
		{
			c = "(nil)";
			printf("[%d] %s\n", h->len, c);
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		s++;
	}
	return (s);
}

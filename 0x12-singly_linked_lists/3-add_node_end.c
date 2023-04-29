#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: double pointer to list
 * @str: string added
 * Return: address of the new element, or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp, *new;
	unsigned int i = 0;

	while (str[i])
		i++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->len = i;
	new->str = strdup(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;
	return (new);
}

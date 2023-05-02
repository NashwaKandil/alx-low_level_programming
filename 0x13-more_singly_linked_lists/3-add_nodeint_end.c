#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: list to add to
 * @n: int to be stored in a new list
 * Return: address of the new element, or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end, *tmp;

	end = malloc(sizeof(listint_t));
	if (end == NULL)
		return (NULL);
	end->n = n;
	end->next = NULL;
	if (*head == NULL)
	{
		*head = end;
		return (end);
	}
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = end;
	return (end);
}

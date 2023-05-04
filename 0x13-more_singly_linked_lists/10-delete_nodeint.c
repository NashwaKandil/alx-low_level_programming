#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a list
 * @head: list
 * @index: deletion point
 * Return: 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *delete;
	unsigned int i;

	tmp = *head;
	delete = NULL;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (tmp == NULL || tmp->next == NULL)
		{
			return (-1);
		}
		tmp = tmp->next;
	}
	delete = tmp->next;
	tmp->next = delete->next;
	free(delete);
	return (1);
}

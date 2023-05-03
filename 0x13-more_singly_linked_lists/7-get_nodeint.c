#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: list
 * @index: node number
 * Return: nth node of a list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp;

	tmp = head;
	if (head == NULL)
		return (NULL);
	for (i = 0; i != index; i++)
	{
		tmp = head->next;
		head = tmp;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}

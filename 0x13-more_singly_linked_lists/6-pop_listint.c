#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: list to be deleted
 * Return: head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	if (head == NULL || *head == NULL)
		return (0);
	tmp = (*head)->next;
	i = (*head)->n;
	free(*head);
	*head = tmp;
	return (i);
}

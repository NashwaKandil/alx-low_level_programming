#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: list to check
 * @n: int to add to the new list
 * Return: address of the new element, or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head != NULL)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = *head;
		*head = new;
	}
	return (new);
}

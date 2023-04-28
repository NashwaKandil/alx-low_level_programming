#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * *add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to list
 * @str: new string added in the node
 * Return: address of new element, or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	unsigned int l = 0;

	while (str[l])
		l++;
	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);
	n->str = strdup(str);
	n->len = l;
	n->next = (*head);
	(*head) = n;
	return (*head);
}

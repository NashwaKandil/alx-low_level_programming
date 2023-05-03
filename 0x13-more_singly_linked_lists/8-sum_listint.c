#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_listint - returns the sum of all the data (n) of a list
 * @head: list
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp;

	if (head == NULL)
		return (0);
	tmp = head;
	while (head != NULL)
	{
		sum = sum + head->n;
		tmp = head->next;
		head = tmp;
	}
	return (sum);
}

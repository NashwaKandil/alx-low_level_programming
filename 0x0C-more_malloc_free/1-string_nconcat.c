#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 * @n: limit of letters
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *add;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
		i++;
	j = 0;
	while (s2[j] != '\0')
		j++;
	if (n < j)
		add = malloc(sizeof(char) * (i + n + 1));
	else
		add = malloc(sizeof(char) * (i + j + 1));
	if (add == NULL)
		return (NULL);
	for (i = 0 ; s1[i] != '\0' ; i++)
		add[i] = s1[i];
	for (j = 0 ; j < n ; j++)
	{
		add[i] = s2[j];
		i++;
	}
	add[i] = '\0';
	return (add);

}

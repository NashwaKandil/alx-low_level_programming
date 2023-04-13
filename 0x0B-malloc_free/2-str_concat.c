#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: pointer or 0
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *arr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
		i++;
	j = 0;
	while (s2[j] != '\0')
		j++;
	arr = malloc(sizeof(char) * (i + j + 1));
	if (arr == NULL)
		return (NULL);
	i = j = 0;
	for (i = 0 ; s1[i] != '\0' ; i++)
		arr[i] = s1[i];
	for (j = 0 ; s2[j] != '\0' ; j++)
	{
		arr[i] = s2[j];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @str: string to copy
 * Return: pointer or NULL
 */

char *_strdup(char *str)
{
	char *arr;
	int i, j;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	i = i + 1;
	arr = malloc(sizeof(char) * i);
	if (arr == NULL)
		return (NULL);
	for (j = 0 ; str[j] != 0 ; j++)
		arr[j] = str[j];
	return (arr);
}

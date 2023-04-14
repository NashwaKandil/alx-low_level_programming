#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: elements
 * @size: no. of bytes
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int j;
	char *arr;

	arr = malloc(size * nmemb);
	if (nmemb == 0 || arr == NULL || size == 0)
		return (NULL);
	for (j = 0 ; j < nmemb ; j++)
		arr[j] = 0;
	return (arr);
}

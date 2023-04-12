#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars, and initializes it with a specific char
 * @size: size of variable
 * @c: char to store and initialize
 * Return: 0 or pointer
 */

char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *arr;

	arr = malloc(sizeof(char) * size);
	if (size == 0 || arr == NULL)
		return (NULL);
	for (j = 0 ; j < size ; j++)
		arr[j] = c;
	return (arr);
}

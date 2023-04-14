#include "main.h"
#include <stdlib.h>

/**
 * *array_range -  creates an array of integers
 * @min: start of ints
 * @max: end of ints
 * Return: pointer to memory
 */

int *array_range(int min, int max)
{
	int i;
	int *arr;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0 ; min <= max ; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}

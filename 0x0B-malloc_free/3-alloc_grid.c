#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: columns
 * @height: rows
 * Return: pointer or 0
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(sizeof(int*) * height);
	if (arr == NULL)
		return (NULL);
	for (i = 0 ; i < height ; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr == NULL)
		{
			for (; i >= 0 ; i--)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
	}
	for (i = 0 ; i < height ; i++)
	{
		for (j = 0 ; j < width ; j++)
			arr[i][j] = 0;
	}
	return (arr);
	free(arr);
}

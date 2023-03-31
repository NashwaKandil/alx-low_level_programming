#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse content
 * @a: array
 * @n: limit
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int k;

	for (i = 0 ; i < n-- ; i++)
	{
		k = a[i];
		a[i] = a[n];
		a[n] = k;
	}
}

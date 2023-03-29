#include "main.h"

/**
 * swap_int - swaps value of two ints
 * @a: int pointed to by *a
 * @*a: pointer
 * @b: int pointed to by *b
 * @*b: pointer
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}

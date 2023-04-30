#include "main.h"

int actual_sqrt(int num, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: natural square root of n or -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (actual_sqrt(n, 0));
}

/**
 * actual_sqrt - finds natural square root
 * @num: number to find its square root
 * @i: counter
 * Return: square root
 */

int actual_sqrt(int num, int i)
{
	if (num < i * i)
	{
		return (-1);
	}
	if (num == i * i)
	{
		return (i);
	}
	return (actual_sqrt(num, i + 1));
}

#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: natural square root of n or -1
 */

int _sqrt_recursion(int n)
{
	int i;

	if (n > 0)
	{
		if (n % 2 == 0 ||
		n % 3 == 0 ||
		n % 5 == 0 ||
		n % 7 == 0 ||
		n / 1 == 1)
		{
			i = 1;
			if (n == i * i)
			{
				return (i);
			}
			else if (n > i * i)
			{
				i++;
				_sqrt_recursion(n);
			}
		}
		return (-1);
	}
	return (-1);
}

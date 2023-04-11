#include "main.h"
#include <stdio.h>

/**
 * _isupper - start
 * @c: value checked
 * Return: 1 if uppercase and 0 otherwise
 */

int _isupper(int c)
{
	if (c <= 90 && c >= 65)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	putchar('\n');
}

#include "main.h"
#include <stdio.h>

/**
 * _isdigit - start
 * @c: value to check
 * Return: 1 if digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c <= 9 || c >= 0)
		return (1);
	else
		return (0);
}

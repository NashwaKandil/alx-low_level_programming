#include "main.h"
#include <stdio.h>

/**
 * _isdigit - start
 * @c: value to check
 * Return: 1 if digit and 0 otherwise
 */

int _isdigit(int c)
{
	if ((c <= 90 && c >= 65) || (c <= 122 && c >= 97))
		return (1);
	else
		return (0);
}

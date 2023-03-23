#include "main.h"
#include <stdio.h>

/**
 * _abs - start
 * @i: checked value
 * Return: 0
 */

int _abs(int i)
{
	if (i >= 0)
		i = i;
	else
		i = -(i);
	return (i);
	_putchar('\n');
}

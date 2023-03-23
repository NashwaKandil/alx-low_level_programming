#include "main.h"

/**
 * print_last_digit - start
 *
 * @i: value checked
 *
 * Return: value of last digit
 */

int print_last_digit(int i)
{
	if (i >= 0)
		_putchar((i % 10) + '0');
	else
	{
		i = -i;
		_putchar((i % 10) + '0');
	}
	return (i % 10);
	_putchar('\n');
}

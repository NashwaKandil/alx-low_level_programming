#include "main.h"
/**
 * print_sign - start
 *
 * @n: value checked
 *
 * Return: 1 if + and 0 if zero and -1 if -
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		return (0);
	}
	else
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (-1);
	}
	_putchar('\n');
}

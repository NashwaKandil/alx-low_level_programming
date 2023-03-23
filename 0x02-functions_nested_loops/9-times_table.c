#include "main.h"

/**
 * times_table - start
 *
 * Return: 0
 */

void times_table(void)
{
	int i;
	int v;
	int x;

	i = 0;
	v = 0;
	while (i < 10)
	{
		x = i * v;
		_putchar(x + '0');
		v++;
		while (v < 10)
		{
			x = i * v;
			if (x < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(x + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
			}
			v++;
		}
		_putchar('\n');
		v = 0;
		i++;
	}
}

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
		while (v < 10)
		{
			x = i * v;
			if (x < 10)
			{
				_putchar(x + '0');
				if (v != 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else
			{
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
				if (v != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			v++;
		}
		_putchar('\n');
		v = 0;
		i++;
	}
}

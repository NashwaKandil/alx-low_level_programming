#include "main.h"

/**
 * jack_bauer - start
 *
 * Return: 0
 */

void jack_bauer(void)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i <= 23)
	{
		while (j <= 59)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
			j++;
		}
		j = 0;
		i++;
	}
}

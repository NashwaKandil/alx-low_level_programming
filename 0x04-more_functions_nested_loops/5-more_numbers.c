#include "main.h"
#include <stdio.h>

/**
 * more_numbers - from 0 to 14
 *
 * Return: 0
 */

void more_numbers(void)
{
	int y;
	int z;

	y = 0;
	z = 0;
	while (y < 10)
	{
		while (z < 15)
		{
			if (z < 10)
			{
				putchar(z + '0');
				z++;
			}
			else
			{
				putchar((z / 10) + '0');
				putchar((z % 10) + '0');
				z++;
			}
		}
		putchar('\n');
		z = 0;
		y++;
	}
}

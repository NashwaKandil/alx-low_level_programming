#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - all except 2 and 4
 *
 * Return: 0
 */

void print_most_numbers(void)
{
	int x;

	x = 0;
	while (x <= 9)
	{
		if (x == 2 || x == 4)
		{
			continue;
		}
		else
		{
			putchar(x + '0');
		}
		x++;
	}
	putchar('\n');
}

#include "main.h"
#include <stdio.h>

/**
 * print_numbers - numbers from 0 to 9
 *
 * Return: 0
 */

void print_numbers(void)
{
	int x;

	x = 0;
	while (x <= 9)
	{
		putchar(x + 48);
		x++;
	}
	putchar('\n');
}

#include "main.h"
#include <stdio.h>

/**
 * print_line - straight line
 * @n: length of line
 * Return: 0
 */

void print_line(int n)
{
	if (n == 0 || n < 0)
		putchar('\n');
	else
	{
		while (n > 0)
		{
			putchar('_');
			n--;
		}
		putchar('\n');
	}
}

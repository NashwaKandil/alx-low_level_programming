#include "main.h"

/**
 * print_alphabet_x10 - start
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char i;
	int x;

	i = 'a';
	x = 0;
	while (x < 10)
	{
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		i = 'a';
		_putchar('\n');
		x++;
	}
}

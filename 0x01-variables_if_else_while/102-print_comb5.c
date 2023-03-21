#include <stdio.h>

/**
 * main - start
 *
 * Return: 0
 */

int main(void)
{
	int i;
	int x;

	i = 0;
	x = 1;
	while (i < 99)
	{
		while (x < 100)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((x / 10) + '0');
			putchar((x % 10) + '0');
			if (i + x != 197)
			{
				putchar(',');
				putchar(' ');
			}
			x++;
		}
		i++;
		x = i + 1;
	}
	putchar('\n');
	return (0);
}

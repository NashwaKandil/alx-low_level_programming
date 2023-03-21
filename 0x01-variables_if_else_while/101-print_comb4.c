#include <stdio.h>

/**
 * main - start
 *
 * Return: 0
 */

int main(void)
{
	int i;
	int y;
	int x;

	i = 0;
	y = 1;
	x = 2;
	while (i < 8)
	{
		while (y < 9)
		{
			while (x < 10)
			{
				putchar(i + 48);
				putchar(y + 48);
				putchar(x + 48);
				if (i + y + x != 24)
				{
					putchar(',');
					putchar(' ');
				}
				x++;
			}
			y++;
			x = y + 1;
		}
		i++;
		y = i + 1;
		x = y + 1;
	}
	putchar('\n');
	return (0);
}

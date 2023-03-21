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
	for (i = 0; i <= 9; i++)
	{
		for (x = 1; x <= 9; x++)
		{
			if (i < x && i != x)
			{
				putchar(i + 48);
				putchar(x + 48);
				if (i + x != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

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
	while (i <= 8 && x <= 9)
	{
		putchar(i + 48);
		putchar(x + 48);
		if (i + x != 17)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
		x++;
	}
	putchar('\n');
	return (0);
}

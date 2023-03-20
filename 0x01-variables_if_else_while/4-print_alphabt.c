#include <stdio.h>

/**
 * main - start
 *
 * Return: 0
 */

int main(void)
{
	char y;

	y = 'a';
	while (y <= 'z')
	{
		if (y == 'e' || y == 'q')
		{
			y++;
			continue;
		}
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}

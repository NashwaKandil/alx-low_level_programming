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
	while (y != 'e' || y != 'q' || y <= 'z')
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}

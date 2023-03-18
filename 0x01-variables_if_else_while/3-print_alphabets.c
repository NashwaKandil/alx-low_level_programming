#include <stdio.h>

/**
 * main - start
 *
 * Return: 0
 */

int main(void)
{
	char x;
	char X;

	x = 'a';
	X = 'A';
	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	while (X <= 'Z')
	{
		putchar(X);
		X++;
	}
	putchar('\n');
	return (0);
}

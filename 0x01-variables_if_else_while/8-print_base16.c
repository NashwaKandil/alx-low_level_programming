#include <stdio.h>

/**
 * main - start
 *
 * Return: 0
 */

int main(void)
{
	int i;
	char I;

	i = 0;
	I = 'a';
	while (i <= 9)
	{
		putchar(i + 48);
		i++;
	}
	while (I <= 'f')
	{
		putchar(I);
		I++;
	}
	putchar('\n');
	return (0);
}

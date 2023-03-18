#include <stdio.h>

/**
 * main - start point
 *
 * Return: 0
 */

int main(void)
{
	char m;

	m = 'a';
	while (m <= 'z')
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}

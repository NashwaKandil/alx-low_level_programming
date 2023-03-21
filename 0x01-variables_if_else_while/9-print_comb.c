#include <stdio.h>
/**
 * main - start
 *
 * Return: 0
 */

int main(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		putchar(i + 48);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}

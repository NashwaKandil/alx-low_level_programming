#include "main.h"
#include <stdio.h>

/**
 * print_square - print desired square
 * @size: size of square
 * Return: 0
 */

void print_square(int size)
{
	int x;
	int y;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < sizie; y++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}

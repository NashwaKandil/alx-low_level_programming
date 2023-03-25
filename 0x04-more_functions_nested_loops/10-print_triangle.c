#include "main.h"
#include <stdio.h>

/**
 * print_triangle - to print triangles
 * @size: size of triangle
 * Return: 0
 */

void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y <= x; y++)
			{
				for (z = size - (x + 1); z > 0 && y == 0; z--)
				{
					_putchar(' ');
				}
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

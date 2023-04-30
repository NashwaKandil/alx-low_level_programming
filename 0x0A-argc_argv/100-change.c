#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins to make change for amount of money
 * @argc: no of arguments
 * @argv: arguments array
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int a, b, res;

	int change[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	res = 0;
	a = atoi(argv[1]);

	if (a < 0)
	{
		printf("0\n");
		return (0);
	}
	for (b = 0; a >= 0 && b < 5; b++)
	{
		while (a >= change[b])
		{
			res++;
			a = a - change[b];
		}
	}
	printf("%d\n", res);
	return (0);
}

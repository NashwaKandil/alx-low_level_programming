#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * mul - multiplies two positive numbers
 * @num1: 1st number
 * @num2: 2nd number
 * Return: 0
 */

int mul(int num1, int num2)
{
	int sum;

	if (num1 >= 48 && num1 <= 57)
	{
		if (num2 >= 48 && num2 <= 57)
		{
			sum = num1 * num2;
			printf("%d\n", sum);
		}
	}
	else
	{
		printf("error\n");
		exit(98);
	}
	return (0);
}

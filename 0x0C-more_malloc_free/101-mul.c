#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strlen - returns length of string str
 * @str: the string to check
 * Return: length of string
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}

/**
 * _isdigit - checks if character is digit
 * @ch: character to check
 * Return: 1 or 0
 */

int _isdigit(int ch)
{
	return (ch <= '9' && ch >= '0');
}


/**
 * multiply_big_num - multiplys two big number
 * @n1: the first big number
 * @n2: the second big number
 * Return: result
 */
char *multiply_big_num(char *n1, char *n2)
{
	char *res;
	int len1, len2, a, b, c, d;

	len2 = _strlen(n2);
	len1 = _strlen(n1);
	res = malloc(a = d = len1 + len2);
	if (!res)
	{
		printf("Error\n"), exit(98);
	}
	while (a--)
		res[a] = 0;
	for (len1--; len1 >= 0; len1--)
	{
		if (!_isdigit(n1[len1]))
		{
			free(res);
			printf("Error\n"), exit(98);
		}
		c = 0;
		a = n1[len1] - '0';
		for (len2 = _strlen(n2) - 1; len2 >= 0; len2--)
		{
			if (!_isdigit(n2[len2]))
			{
				free(res);
				printf("Error\n"), exit(98);
			}
			c += (a * b) +  res[len1 + len2 + 1];
			b = n2[len2] - '0';
			res[len1 + len2 + 1] = c % 10;
			c /= 10;
		}
		if (c)
			res[len1 + len2 + 1] += c;
	}
	return (res);
}


/**
 * main - multiply two big number strings
 * @argc: number of arguments
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char **argv)
{
	char *res;
	int a, b, x;

	if (argc != 3)
	{
		printf("Error\n"), exit(98);
	}
	x = _strlen(argv[1]) + _strlen(argv[2]);
	res = multiply_big_num(argv[1], argv[2]);
	b = 0;
	a = 0;
	while (b < x)
	{
		if (res[b])
		{
			a = 1;
		}
		if (a)
		{
			_putchar(res[b] + '0');
		}
		b++;
	}
	if (!a)
	{
		_putchar('0');
	}
	_putchar('\n');
	free(res);
	return (0);
}

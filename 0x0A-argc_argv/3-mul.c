#include <stdio.h>
#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: string converted
 * Return: number converted from the string
 */

int _atoi(char *s)
{
	int a, b, n, l, f, dgt;

	a = 0;
	b = 0;
	n = 0;
	l = 0;
	f = 0;
	dgt = 0;
	while (s[l] != '\0')
		l++;
	while (a < l && f == 0)
	{
		if (s[a] == '-')
			++b;
		if (s[a] >= '0' && s[a] <= '9')
		{
			dgt = s[a] - '0';
			if (b % 2)
				dgt = -dgt;
			n = n * 10 + dgt;
			f = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			f = 0;
		}
		a++;
	}
	if (f == 0)
		return (0);
	return (n);
}

/**
 * main - multiplies two numbers
 * @argc: number of arg
 * @argv: array of arg
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int n1, n2, res;

	if (argc > 3 || argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	n2 = _atoi(argv[2]);
	n1 = _atoi(argv[1]);
	res = n2 * n1;
	printf("%d\n", res);
	return (0);
}

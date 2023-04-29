#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

/**
 * num_check - checks for digit
 * @s: string to check
 * Return: 0
 */

int num_check(char *s)
{
	unsigned int i;

	for (i = 0; i < strlen(s); i++)
	{
		if (!isdigit(s[i]))
			return (0);
	}
	return (1);
}

/**
 * main - adds positive numbers
 * @argc: no of arguments
 * @argv: arguments array
 * Return: sum or 1 when error
 */

int main(int argc, char *argv[])
{
	int i, str, res;

	res = 0;
	for (i = 1; i < argc; i++)
	{
		if (num_check(argv[i]))
		{
			str = atoi(argv[i]);
			res += str;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", res);
	return (0);
}

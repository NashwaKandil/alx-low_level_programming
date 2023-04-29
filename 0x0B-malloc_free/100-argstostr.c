#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *argstostr - concatenates all the arguments of your program
 * @ac: int input
 * @av: double pointer array
 * Return: pointer or 0
 */

char *argstostr(int ac, char **av)
{
	int j, m, r = 0, l = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
		for (m = 0; av[j][m]; m++)
			l++;
	}
	l += ac;
	s = malloc(sizeof(char) * l + 1);
	if (s == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
		for (m = 0; av[j][m]; m++)
		{
			s[r] = av[j][m];
			r++;
		}
		if (s[r] == '\0')
			s[r++] = '\n';
	}
	return (s);
}

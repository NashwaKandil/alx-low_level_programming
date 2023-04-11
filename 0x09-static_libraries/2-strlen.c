#include "main.h"

/**
 * _strlen - length of string
 * @*s: pointer
 * @s: var
 * Return: 0
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);

}

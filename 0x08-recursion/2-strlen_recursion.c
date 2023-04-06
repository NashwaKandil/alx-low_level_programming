#include "main.h"

/**
 *  _strlen_recursion - returns the length of a string
 *  @s: pointer to string
 *  Return: length of string
 */

int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (*s != '\0')
	{
		i++;
		i = i + _strlen_recursion(s + 1);
	}
	return (i);
}

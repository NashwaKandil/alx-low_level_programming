#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: pointer to a string to be searched
 * @c: charachter to be located
 * Return: c or 0;
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}

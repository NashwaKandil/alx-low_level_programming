#include "main.h"

/**
 * wildcmp - Compares two strings
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * Return: 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 == '*' && *s2 != '\0')
			return (wildcmp(s1, s2 + 1));
		return (*s2 == '\0');
	}
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	else if (*s2 == *s1)
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}

#include "main.h"

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string to check
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	char *z;

	if (*s != '\0')
	{
		is_palindrome(s + 1);
		z = s;
	}
	z = s;
	if (z == s)
		return (1);
	return (0);
}

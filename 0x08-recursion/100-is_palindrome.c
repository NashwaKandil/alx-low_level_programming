#include "main.h"

int _strlen_rec(char *str);
int check(char *str, int i, int len);

/**
 * is_palindrome - checks for palindrome
 * @s: string to reverse
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (check(s, 0, _strlen_rec(s)));
}

/**
 * check - checks for palindrome
 * @str: string to check
 * @i: iterator
 * @len: length of the string
 * Return: 1 or 0
 */

int check(char *str, int i, int len)
{
	if (*(i + str) != *(len + str - 1))
	{
		return (0);
	}
	if (len <= i)
	{
		return (1);
	}
	return (check(str, i + 1, len - 1));
}


/**
 * _strlen_rec - returns length of a string
 * @str: string to calculate the length of it
 * Return: length of the string
 */

int _strlen_rec(char *str)
{
	if (*str == '\0')
	{
		return (0);
	}
	return (1 + _strlen_rec(str + 1));
}

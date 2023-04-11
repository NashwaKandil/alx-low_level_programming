#include "main.h"

/**
 * _isalpha - start
 *
 * @c: value checked
 *
 * Return: 1 if c is lowercase or uppercase
 * and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c <= 122 && c >= 97) || (c <= 90 && c >= 65))
		return (1);
	else
		return (0);
}

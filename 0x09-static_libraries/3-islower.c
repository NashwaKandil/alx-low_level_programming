#include "main.h"

/**
 * _islower - start
 *
 * @c: value checked
 *
 * Return: 1 if lowercase
 * and 0 otherwise
 */

int _islower(int c)
{
	if (c  <= 122 && c >= 97)
		return (1);
	else
		return (0);
}

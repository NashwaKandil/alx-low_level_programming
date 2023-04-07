#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number, otherwise return 0
 * @n: number to check
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	else if (n > 2)
	{
		if (n > 7 &&
			(n % 2 == 0 ||
			n % 3 == 0 ||
			n % 5 == 0 ||
			n % 7 == 0))
			return (0);
		else
			return (1);
	}
	return (0);
}

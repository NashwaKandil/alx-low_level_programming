#include "main.h"

/**
 * prime_actual - checks if a number is prime recursively
 * @num: number to be evaluated
 * @i: counter
 * Return: 1 or 0
 */

int prime_actual(int num, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (i > 0 && num % i == 0)
	{
		return (0);
	}
	return (prime_actual(num, i - 1));
}


/**
 * is_prime_number - returns 1 if the input integer is a
 * prime number, otherwise return 0
 * @n: number to check
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_actual(n, n - 1));
}

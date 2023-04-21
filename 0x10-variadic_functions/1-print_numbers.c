#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string between numbers
 * @n: no. of integers passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list x;
	unsigned int i;
	int next;

	va_start(x, n);
	for (i = 0; i < n ; i++)
	{
		next = va_arg(x, int);
		printf("%d", next);
		if (i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(x);
}

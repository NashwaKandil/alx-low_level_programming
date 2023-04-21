#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string between strings
 * @n: no. of strings passed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int i;
	char *p;

	va_start(a, n);
	for (i = 0 ; i < n ; i++)
	{
		p = va_arg(a, char*);
		if (p == NULL)
			p = "(nil)";
		printf("%s", p);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(a);
	printf("\n");
}

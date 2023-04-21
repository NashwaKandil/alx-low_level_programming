#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed
 */

void print_all(const char * const format, ...)
{
	va_list all;
	int x;
	char *s;
	int f;

	va_start(all, format);
	x = 0;
	while (format[x] != '\0')
	{
		if (format[x] == 'c' || format[x] == 's')
		{
			s = va_arg(all, char*);
			if (s != NULL)
				s = "(nil)";
			printf("%s", s);
		}
		else if (format[x] == 'i' || format[x] == 'f')
		{
			f = va_arg(all, int);
			printf("%d", f);
		}
		else
			continue;
		printf(", ");
		x++;
	}
	printf("\n");
}

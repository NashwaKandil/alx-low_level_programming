#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed
 */

void print_all(const char * const format, ...)
{
	va_list lst;

	char *str, *sp = "";

	int j = 0;

	va_start(lst, format);
	if (format)
	{
		while (format[j])
		{
			switch (format[j])
			{
			case 'c':
				printf("%s%c", sp, va_arg(lst, int));
				break;
			case 's':
				str = va_arg(lst, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", sp, str);
				break;
			case 'f':
				printf("%s%f", sp, va_arg(lst, double));
				break;
			case 'i':
				printf("%s%d", sp, va_arg(lst, int));
				break;
			default:
				j++;
				continue;
			}
			sp = ", ";
			j++;
		}
	}
	printf("\n");
	va_end(lst);
}

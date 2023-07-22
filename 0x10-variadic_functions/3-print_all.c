#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *strn, *li = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", li, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", li, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", li, va_arg(list, double));
					break;
				case 's':
					strn = va_arg(list, char *);
					if (!strn)
						strn = "(nil)";
					printf("%s%s", li, strn);
					break;
				default:
					i++;
					continue;
			}
			li = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(list);
}


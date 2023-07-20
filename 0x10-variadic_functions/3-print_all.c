#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_all - function that prints anything
 *@format: list of all arguments passed
 *...: variables to be printed
 */
void print_all(const char * const format, ...)
{
	char *ptr, *separator = "";
	int i = 0;

	va_list all;

	va_start(all, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(all, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(all, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(all, double));
					break;
				case 's':
					ptr = va_arg(all, char *);
					if (!ptr)
						ptr = "(nil)";
					printf("%s%s", separator, ptr);
					break;
				default:
					i++;
					continue;
			}
			separator = ",";
			i++;
		}
	}
	printf("\n");
	va_end(all);
}

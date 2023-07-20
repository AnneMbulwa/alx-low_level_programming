#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_numbers - function that prints numbers
 *@separator: separate numbers
 *@n: number of integers
 *@...: number of variables to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i, x;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(list, int);
		printf("%d", x);
		if ((separator != NULL) && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(list);
}

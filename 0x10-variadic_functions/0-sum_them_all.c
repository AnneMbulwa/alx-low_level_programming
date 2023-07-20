#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *sum_them_all - function that returns the sum of all parameters
 *@n: number of parameters
 *Return: 0 otherwise sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list add;
	unsigned int i, sum = 0;

	va_start(add, n);
	for (i = 0; i < n; i++)
		sum += va_arg(add, int);
	va_end(add);

	return (sum);
}

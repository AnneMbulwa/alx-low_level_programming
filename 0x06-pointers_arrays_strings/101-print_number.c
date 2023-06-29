#include "main.h"
/**
 *print_number - a function that prints an integer.
 *@n: integer
 *Return: 0
 */
void print_number(int n)
{
	unsigned int num, count, m;

	if (n < 0)
	{
		_putchar(45);
		num = n * -1;
	}
	else
	{
		num = n;
	}

	m = num;
	count = 1;

	while (m > 9)
	{
		m /= 10;
		count *= 10;
	}
	for (; count >= 1; count /= 10)
	{
		_putchar(((num / count) % 10) + 48);
	}
}

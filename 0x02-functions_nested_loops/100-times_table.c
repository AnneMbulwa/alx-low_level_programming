#include "main.h"
/**
 *print_times_table -  prints the n times table, starting with 0.
 *@n: computed number
 */
void print_times_table(int n)
{
	int a, mult, prod;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
		_putchar('0');
		for (mult = 1; mult <= n; mult++)
		{
		_putchar(44);
		_putchar(32);
		prod = a * mult;
		if (prod <= 99)
		_putchar(32);
		if (prod <= 9)
		_putchar(32);
		if (prod >= 100)
		{
		_putchar((prod / 100) + '0');
		_putchar(((prod / 10)) % 10 + '0');
		}
		else if (prod <= 99 && prod >= 10)
		{
		_putchar((prod / 10) + '0');
		}
		_putchar((prod % 10) + '0');
		}
		_putchar('\n');
		}
	}
}

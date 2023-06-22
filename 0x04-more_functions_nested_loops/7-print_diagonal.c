#include "main.h"
/**
 *print_diagonal -  draws a diagonal line on the terminal
 *@n: computed number
 *Return: void
 */
void print_diagonal(int n)
{
	int b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (b = 0; b < n; b++)
		{
			_putchar(92);
		}
		_putchar('\n');
	}
}

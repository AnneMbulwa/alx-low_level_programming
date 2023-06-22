#include "main.h"
/**
 *print_diagonal -  draws a diagonal line on the terminal
 *@n: computed number
 *Return: void
 */
void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (b = 0; b < n; b++)
		{
			for (a = 0; a < b; a++)
			{
				_putchar(32);
			}
		_putchar('\n');
		}
	}
}

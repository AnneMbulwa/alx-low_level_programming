#include "main.h"
/**
 *print_line -  draws a straight line in the terminal
 *@n: computed number
 */
void print_line(int n)
{
	int a;

	for (a = 0; a <= n; a++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}

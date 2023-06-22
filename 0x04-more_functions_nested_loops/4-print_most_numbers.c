#include "main.h"
/**
 *print_most_numbers - prints the numbers, from 0 to 9, followed by a new line
 *Return: numbers except 2 and 4
 */
void print_most_numbers(void)
{
	int y = 0;

	for (; y <= 9; y++)
	{
		if (y == 2 || y == 4)
		{
			continue;
		}
		else
		{
			_putchar(y + '0');
		}
	}
	_putchar('\n');
}

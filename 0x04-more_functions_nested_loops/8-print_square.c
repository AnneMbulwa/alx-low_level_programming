#include "main.h"
/**
 *print_square -  prints a square
 *@size: computed number
 *Return: square
 */
void print_square(int size)
{
	int y, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (z = 0; z < size; z++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}

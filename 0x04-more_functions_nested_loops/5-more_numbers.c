#include "main.h"
/**
 *more_numbers - prints 10 times the numbers, from 0 to 14
 *Return: 0
 */
void more_numbers(void)
{
	int count;
	int z;

	for (count = 0; count < 10; count++)
	{
		for (z = 0; z <= 14; z++)
		{
			if (z > 9)
			{
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
			}
		}
	}
	_putchar('\n');
}

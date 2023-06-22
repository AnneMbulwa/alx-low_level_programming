#include "main.h"
/**
 *more_numbers - prints 10 times the numbers, from 0 to 14
 *Return: 10 times from 0 to 14
 */
void more_numbers(void)
{
	int c, z;

	for (c = 0; c < 10; c++)
	{
		for (z = 0; z <= 14; z++)
		{
			if (z > 9)
			{
				_putchar((z / 10) + '0');
			}
				_putchar((z % 10) + '0');
		}
		_putchar('\n');
	}
}

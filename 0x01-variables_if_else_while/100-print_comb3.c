#include <stdio.h>
/**
 * main -  Program that prints all combinations of 2 digits
 * Return: 0
 */
int main(void)
{
	int x = '0';
	int y = '0';

	for (x = '0'; x <= '8'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			if (!(x == y) || (x > y))
			{
				putchar(x);
				putchar(y);
				if (x == '8' && y == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}

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
			if (y > x)
			{
				putchar(x);
				putchar(y);
				if (x != '8' && y != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

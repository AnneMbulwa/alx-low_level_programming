#include <stdio.h>
/**
 * main -  Program that prints all combinations of two single digits
 * Return: 0
 */
int main(void)
{
	int a = '0';
	int b = '1';

	while (a <= '9')
	{
		while (b <= '9')
		{
			if (!(a > b) || a == b)
			{
				putchar(a);
				putchar(b);
				if (a == '8' && b == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			b++;
		}
		b = '0';
		a++;
	}
return (0);
}

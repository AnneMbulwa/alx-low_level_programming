#include <stdio.h>
/**
 * main -  Program that prints all possible combinations of three digits
 * Return: 0
 */
int main(void)
{
	int k, b, m;

	for (k = 48; k < 58; k++)
	{
		for (b = 49; b < 58; b++)
		{
			for (m = 50; m < 58; m++)
			{
				if (m > b && b > k)
				{
					putchar(k);
					putchar(b);
					putchar(m);
					if (k != 55 || b != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

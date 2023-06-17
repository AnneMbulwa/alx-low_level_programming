#include <stdio.h>
/**
 * main -  Program that prints all possible combinations of three digits
 * Return: 0
 */
int main(void)
{
	int k = '0';
	int b = '0';
	int m = '0';

	while (k <= '7')
	{
		while (b <= '8')
		{
			while (m <= '9')
			{
				if (k < b && b < k)
				{
					putchar(k);
					putchar(b);
					putchar(m);
					if (!(k == '7' && b == '8' && m == '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
				m++;
			}
			m = '0';
			b++;
		}
		b = '0';
		k++;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main -  Program that prints all possible combinations of single-digits
 * Return: 0
 */
int main(void)
{
	int z = '0';

	while (z <= '9')
	{
		putchar(z);
		if (z != '9')
		{
			putchar(',');
			putchar(' ');
		}
		++z;
	}
	putchar('\n');
	return (0);
}


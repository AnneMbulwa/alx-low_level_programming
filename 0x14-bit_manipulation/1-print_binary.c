#include "main.h"

/**
 *print_binary - print binary representation of number
 *@n: number to print to binary
 *Return: binary
 */
void print_binary(unsigned long int n)
{
	int k = sizeof(n) * 8;
	int num = 0;

	while (k)
	{
		if (n & 1L << --k)
		{
			_putchar('1');
			num++;
		}
		else if (num)
			_putchar('0');
	}
	if (!num)
		_putchar('0');
}

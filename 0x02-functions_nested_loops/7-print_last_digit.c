#include "main.h"
/**
 *print_last_digit - prints the last digit of a number
 *@b:computed number
 *Return: value of last digit
 */
int print_last_digit(int b)
{
	int lastnum;

	lastnum = b % 10;
	if (lastnum < 0)
	{
		lastnum = lastnum * -1;
	}
	_putchar(lastnum + '0');
	return (0);
}

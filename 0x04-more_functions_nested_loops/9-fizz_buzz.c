#include "main."
#include <stdio.h>
/**
 *main - print FizzBuzz program test
 *Return: 0
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			_putchar("FizzBuzz");
		}
		else if (a % 3 == 0)
		{
			_putchar("Fizz");
		}
		else if (a % 5 == 0)
		{
			_putchar("Buzz");
		}
		else
		{
			_putchar("%d", a)
		}
		if (a != 100)
		{
			_putchar(32);
		}
		_putchar('\n');
	}
	return (0);
}

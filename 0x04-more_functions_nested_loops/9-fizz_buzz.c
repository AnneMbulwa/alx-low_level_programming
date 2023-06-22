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
		if ((a % 3 == 0) && (a % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", a)
		}
		if (a != 100)
		{
			printf(32);
		}
	}
	printf('\n');
	return (0);
}

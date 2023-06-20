#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int a;
	long b = 0, c = 1, sum;

	for (a = 0; a < 50; a++)
	{
		sum = b + c;
		printf("%lu", sum);

		b = c;
		c = sum;

		if (a == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}

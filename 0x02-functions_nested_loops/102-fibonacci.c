#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int a, b, c;

	printf("%d, %d, ", a, b);
	c = a + b;
	while (c <= 50)
	{
		printf("%d, ", c);
		a = b;
		b = c;
		c = a + b
	}
	printf("\n");
	return (0);
}

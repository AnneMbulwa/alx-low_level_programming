#include <stdio.h>
/**
 * main - Program that prints single digits number of base 10
 * Return: 0
 */
int main(void)
{
	int n;

	while (n < 10)
	{
		printf("%d", n);
		n += 1;
	}
	printf("\n");
	return (0);
}

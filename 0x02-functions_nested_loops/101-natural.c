#include <stdio.h>
/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024
 * Return: 0 SUCCESS
 */
int main(void)
{
	int y, sum = 0;

	for (y = 0; y < 1024; y++)
	{
		if ((y % 3 == 0) || (y % 5) == 0)
		{
			sum + = y;
		}
	}
	printf("%d\n", sum);
	return (0);
}

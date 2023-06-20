#include <stdio.h>
/**
 *main -  finds and prints the sum of the even-valued terms
 *Return: 0
 */
int main(void)
{
	int x;
	long int a, b, sum, next;

	a = 1;
	b = 2;
	sum = 0;

	for (x = 1; x <= 33; ++x)
	{
		if (a < 4000000 && (a % 2) == 0)
		{
			sum = sum + a;
		}
		next = a + b;
		a = b;
		b = next;
	}
	printf("%ld\n", sum);
	return (0);
}

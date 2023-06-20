#include <stdio.h>
/**
 *main -  finds and prints the sum of the even-valued terms
 *Return: 0
 */
int main(void)
{
	int a = 1;
	int b = 2;
	long int sum, next;

	while (b + a < 4000000)
	{
		if (a % 2 == 0)
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

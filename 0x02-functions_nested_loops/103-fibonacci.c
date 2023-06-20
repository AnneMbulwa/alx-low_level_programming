#include <stdio.h>
/**
 *main -  finds and prints the sum of the even-valued terms
 *Return: 0
 */
int main(void)
{
	int a = 1;
	int b = 2;

	sum = 0;

	while (a < 4000000)
	{
		if (a % 2 == 0)
		{
			sum = sum + a;
		}

		int next = a + b;

		a = b;
		b = next;
	}
	printf("%d\n", sum);
	return (0);
}

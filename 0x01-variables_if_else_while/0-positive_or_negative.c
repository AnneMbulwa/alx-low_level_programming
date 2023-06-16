#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program that print if a number is positive, negative or zero
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
	{
		printf(" %d is %d\n", n, "positive");
	}
	else if (n < 0)
	{
		printf("%d is %d\n", n, "negative");
	}
	else
	{
		printf("%d is %d\n", n, "zero");
	}

	return (0);
}

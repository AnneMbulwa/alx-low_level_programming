#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *main - prints the min number of coins to make
 *a change for amount of money
 *@argc: number of arguments
 *@argv: array of arguments
  *Return: 0, 1(Error)
 */
int main(int argc, char *argv[])
{
	int num, b, results;

	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	results = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (b = 0; b < 5 && num >= 0; b++)
	{
		while (num >= coins[b])
		{
			results++;
			num -= coins[b];
		}
	}
	printf("%d\n", results);
	return (0);
}

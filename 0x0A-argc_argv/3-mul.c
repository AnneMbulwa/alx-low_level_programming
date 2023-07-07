#include <stdio.h>
#include "main.h"
/**
 *main - program that multiples two numbers
 *@argc: number of arguments
 *@argv: array of arguments
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int a = 0;
	int b = 0;
	int results = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	results = a * b;
	printf("%d\n", results);

	return (0);
}

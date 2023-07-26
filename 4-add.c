#include <stdio.h>
#include "main.h"

int atoi(char *);
/**
 *main - adds 2 positive numbers
 *@argc: number of arguments
 *@argv: array of arguments
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j, k, num;
	int results = 0;

	if (argc == 0)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (k = 1; k < argc; k++)
	{
		num = atoi(argv[k]);
		results += num;
	}
	printf("%d\n", results);
	return (0);
}

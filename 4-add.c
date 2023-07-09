#include <stdio.h>
#include "main.h"
/**
 *main - adds 2 positive numbers
 *@argc: number of arguments
 *@argv: array of arguments
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int results = 0;
	int num = 0;

	if (argc == 1)
	{
		printf("\n");
		return (0);
	}
	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
			if (!(argv[a][b] == '\0'))
			{
				printf("Error\n");
				return (1);
			}
	}
	num = atoi(argv[a]);
	results += num;
	printf("%d\n", results);
	return (0);
}

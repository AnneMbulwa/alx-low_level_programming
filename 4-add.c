#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *main - adds 2 positive numbers
 *@argc: number of arguments
 *@argv: array of arguments
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int a;
	unsigned int b;
	int results = 0;
	char *e;

	if (argc > 1)
	{
		for (a = 1; a < argc; a++)
		{
			e = argv[a];
			for (b = 0; b < strlen(e); b++)
			{
				if (e[b] < 48 || e[b] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			results += atoi(e);
			e++;
		}
		printf("%d\n", results);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}

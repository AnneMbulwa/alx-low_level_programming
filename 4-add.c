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
	char *s;

	if (argc > 1)
	{
		for (a = 1; a < argc; a++)
		{
			s = argv[a];
			for (b = 0; b < strlen(s); b++)
			{
				if (s[b] < 48 || s[b] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			results += atoi(s);
			s++;
		}
		printf("%d\n", results);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}

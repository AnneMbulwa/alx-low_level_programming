#include <stdio.h>
#include <ctype.h>
#include "main.h"
#include <string.h>

int check_num(char *str);
/**
 *check_num - check if number contain a symbol
 *@str: array string
 *Return: 0
 */
int check_num(char *str)
{
	unsigned int i = 0;

	while (i < strlen(str))
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
 *main - adds 2 positive numbers
 *@argc: number of arguments
 *@argv: array of arguments
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int b;/*string to int*/
	int results = 0;

	while (i < argc)
	{
		if (check_num(argv[i]))
		{
			b = atoi(argv[i]);
			results += b;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", results);

	return (0);
}

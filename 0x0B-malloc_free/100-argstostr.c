#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **argstostr -  function that concatenates all the arguments of your program.
 *@av: double pointer
 *@ac: input
 *Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	int len = 0;
	char *concat;
	int y = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}
	len += ac;
	concat = malloc(sizeof(char) * len + 1);
	if (concat == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			concat[y] = av[i][j];
			y++;
		}
		if (concat[y] == '\0')
			concat[y++] = '\n';
	}
	return (concat);
}

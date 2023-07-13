#include "main.h"
#include <stdlib.h>
/**
 *string_nconcat - function that concatenates two strings
 *@s1: string 1
 *@s2: string 2
 *@n: number of bytes
 *Return: pointer to resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int a = 0, b = 0, l = 0, z = 0;
	unsigned int i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[a])
		a++;
	while (s2[b])
		b++;
	if (n >= b)
		l = i + b;
	else
		l = i + n;
	concat = malloc(sizeof(char) * l + 1);

	if (concat == NULL)
		return (NULL);
	b = 0;
	while (z < l)
	{
		if (z <= i)
			concat[z] = s1[z];
		if (z >= i)
		{
			concat[z] = s2[b];
			b++;
		}
		z++;
	}
	concat[z] = '\0';

	return (concat);
}

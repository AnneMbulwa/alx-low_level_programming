#include "main.h"
/**
 *puts2 - prints every other character of a string
 *@str: string
 *Return: 0
 */
void puts2(char *str)
{
	int a;
	char *s = str;
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	for (a = 0; a <= len - 1; a++)
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
	}
		_putchar('\n');
}

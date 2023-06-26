#include "main.h"
/**
 *puts_half -  function that prints half of a string
 *@str: string
 *Return: 0
 */
void puts_half(char *str)
{
	int len = 0;
	int a, b;
	char *s = str;

	while (*s != '\0')
	{
		len++;
	}
	b = len / 2;
	if (len % 2 == 1)
		b = (len + 1) / 2;
	for (a = b; a <= len - 1; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}

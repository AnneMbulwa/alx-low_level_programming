#include "main.h"
/**
 *puts_half -  function that prints half of a string
 *@str: string
 *Return: 0
 */
void puts_half(char *str)
{
	int len = 0;
	int a;
	char *s = str;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	a = len / 2;
	for (a = 0; a <= ((len + 1) / 2); a++)
	{
		if (len % 2 == 1)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}

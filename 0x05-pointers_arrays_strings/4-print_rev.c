#include "main.h"
/**
 *print_rev -  function that prints a string, in reverse
 *@s: string
 *Return: 0
 */
void print_rev(char *s)
{
	int len = 0;
	int a;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (a = len; a > 0; a--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}

#include "main.h"
/**
 *print_rev -  function that prints a string, in reverse
 *@s: string
 *
 */
void print_rev(char *s)
{
	int len;
	int a;

	while (*s != 0)
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
